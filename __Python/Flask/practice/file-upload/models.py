from db import db


class Img(db.Model):
    __tablename__ = 'profilepictures'
    id = db.Column(db.Integer, primary_key=True)
    img = db.Column(db.Text, unique=True, nullable=False)
    name = db.Column(db.Text, nullable=False)
    mimetype = db.Column(db.Text, nullable=False)

    def __init__(self, name, mimetype, img):
        self.img = img
        self.name = name
        self.mimetype = mimetype

    def __repr__(self):
        return f"<ProfilePic {self.name}>"