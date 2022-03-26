from flask import Flask, jsonify, request
from flask_restful import Resource, Api
import psycopg2

app = Flask(__name__)

conn = psycopg2.connect(host='localhost', port='5432', dbname='csvfileupload', user='postgres', password='7516') #  'postgresql://postgres:7516@localhost:5432/csvfileupload'
cur = conn.cursor()

api = Api(app)

class Hello(Resource):
	def get(self):
		return jsonify({'message': 'hello world'})
	def post(self):
		data = request.get_json()	 # status code
		return jsonify({'data': data}), 201

class upload(Resource):
    def post(self):
        dataset = request.files['dataset']
        cont = open(dataset.filename, 'r')
        next(cont)
        cur.copy_from(cont, 'tasksheet2', sep=',') #columns=('Date','Task_to_complete', 'Task_Completed'),
        conn.commit()
        cur.close()
        conn.close()
        return "Data Imported", 200
	# def post(self, num):
	# 	return jsonify({'ID': num+2-2})

api.add_resource(Hello, '/')
api.add_resource(upload, '/csv-upload')

if __name__ == '__main__':
	app.run(debug = True)