from flask import Flask, request, Response
import sqlalchemy
from werkzeug.utils import secure_filename

from db import db_init, db
from models import Img
from flask_sqlalchemy import SQLAlchemy

app = Flask(__name__)
app.config['SQLALCHEMY_DATABASE_URI'] = 'sqlite:///img.db'
app.config['SQLALCHEMY_TRACK_MODIFICATIONS'] = True
db_init(app)

db =  SQLAlchemy()

@app.route('/')
def hello_world():
    return 'Hello, World!'


@app.route('/upload', methods=['POST'])
def upload():
    try:
        pic = request.files['pic']
        if not pic:
            return 'No pic uploaded!', 400

        filename = secure_filename(pic.filename)
        mimetype = pic.mimetype
        if not filename or not mimetype:
            return 'Bad upload!', 400

        img = Img(img=pic.read(), name=filename, mimetype=mimetype)
        db.session.add(img)
        db.session.commit()

        return 'Img Uploaded!', 200
    except  sqlalchemy.exc.IntegrityError as e:
        return 'Image already exists!', 400

@app.route('/<int:id>')
def get_img(id):
    img = Img.query.filter_by(id=id).first()
    if not img:
        return 'Img Not Found!', 404

    return Response(img.img, mimetype=img.mimetype)

if __name__ == '__main__':
    app.run(debug=True)