from sqlalchemy import create_engine, Column, Integer, String
from sqlalchemy.orm import declarative_base, sessionmaker

engine = create_engine('sqlite:///:memory:', echo=True)

base = declarative_base()

class User(base):
    __tablename__ = 'usertable'

    id = Column(Integer, primary_key=True)
    name = Column(String)
    fullname = Column(String)
    nickname = Column(String)

    def __repr__(self):
        return "<User(name='%s', fullname='%s', nickname='%s')>" % (self.name, self.fullname, self.nickname)

User.__table__
Table('usertable', MetaData(),
        Column('id', Integer(), table=<usertable>, primary_key=True, nullable=False),
        Column('name', String(), table=<users>),
        Column('fullname', String(), table=<users>),
        Column('nickname', String(), table=<users>), schema = None
)

base.metadata.create_all(engine)

Session = sessionmaker(bind = engine)
session = Session()
result = session.query(Customers).all()

