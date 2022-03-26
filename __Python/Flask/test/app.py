# --------------  for basic api --------------------
from flask import Flask, request, jsonify 
from flask_restful import Resource, Api, reqparse # reqperse for migration
# --------------  for migration --------------------
from flask_sqlalchemy import SQLAlchemy # for creating Database
from flask_marshmallow import Marshmallow # for hiding column
from flask_migrate import Migrate # for migration
# --------------  for JWT (Json Web Token) ---------
import jwt
from functools import wraps
import datetime


app = Flask(__name__)

# POSTGRES = {
#     'user': 'postgres',
#     'pw': 'pass',
#     'db': 'test',
#     'host': 'localhost',
#     'port': '5432',
# }
# app.config['SQLALCHEMY_DATABASE_URI'] = 'postgresql://%(user)s:%(pw)s@%(host)s:%(port)s/%(db)s' % POSTGRES

app.config['SQLALCHEMY_DATABASE_URI']='postgresql://postgres:7516@localhost:5432/test'
app.config['SQLALCHEMY_TRACK_MODIFICATIONS']=True 

key = 'TryingToAddPyjwtInMyProject'

db = SQLAlchemy(app)
ma = Marshmallow(app)
api = Api(app)
migrate = Migrate(app, db)


def token_required(f):
    @wraps(f)
    def decorated(*args, **kwargs):
        token = request.args.get('token')

        if not token:
            return jsonify({'message' : 'Token is missing!'}), 403
        try: 
            data = jwt.decode(token, key, algorithms="HS256")
        except:
            return jsonify({'message' : 'Token is invalid!'}), 403

        return f(*args, **kwargs)

    return decorated


class User(db.Model):

    __tablename__ = "users"

    id = db.Column(db.Integer, primary_key = True, autoincrement = True)
    name = db.Column(db.String)
    email = db.Column(db.String)
    password = db.Column(db.String)

    def __init__(self, name, email, password):
        self.name = name
        self.email = email
        self.password = password
    
    def __repr__(self):
        return f"<User {self.name}>"


class UserSchema(ma.Schema):
    class Meta:
        fields = ('id', 'name', 'email', 'password', 'token', 'exp')# here, not including password -> hiding password column
    
user_schema = UserSchema()
users_schema = UserSchema(many = True)


class UserGetPost(Resource):
    def post(self):
        new_user = User(name=request.json['name'], email=request.json['email'], password=request.json['password'])
        token = jwt.encode({'name' : new_user.name, 'id': new_user.id, 'email': new_user.email, 'password': new_user.password}, key)# 'exp' : datetime.datetime.utcnow() + datetime.timedelta(seconds=15)
        db.session.add(new_user)
        db.session.commit()
        return user_schema.jsonify({'data' : new_user.name, 'id': new_user.id, 'email': new_user.email, 'password': new_user.password, 'token': token})

    @token_required
    def get(self):
        users = User.query.all()
        return jsonify(users_schema.dump(users)) 

    # def get(self,id):
    #     user = User.query.get(id)
    #     return jsonify(user_schema.dump(user))
    

class UserPutDelete(Resource):
    def put(self,id):
        user = User.query.get(id)
        user.name = request.json['name']
        user.email = request.json['email']
        user.password = request.json['password']
        db.session.commit()
        return {'message':'data updated'}

    def delete(self,id):
        user = User.query.get(id)
        db.session.delete(user)
        db.session.commit()
        return {'message':'data deleted successfully'}

# @app.errorhandler(404)
  
# def not_found(e):
#     return render_template("Page not found")

api.add_resource(UserGetPost, '/user')
api.add_resource(UserPutDelete, '/user/<int:id>')

@app.route('/')
def hello():
    return {"hello": "world"}

if __name__ == '__main__':
    app.run(debug=True)