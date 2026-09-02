/*
 * LogBufferWithProperCopySemantics.cpp
 *
 *  Created on: 02-Sep-2026
 *      Author: Nilesh
 */

#include<iostream>
#include<string>
using namespace std;

class LogBuffer {

	char *buffer;
	int capacity;
	int size;

	static int instanceCount;

public:

	LogBuffer(int capacity) {
		this->capacity = capacity;
		this->size = 0;

		buffer = new char[capacity + 1];
		buffer[0] = '\0';

		instanceCount++;

		cout << "[LogBuffer Created] capacity = "<<capacity << endl;
	}

	LogBuffer(const LogBuffer &other) {
		this->capacity = other.capacity;
		this->size = other.size;

		buffer = new char[capacity + 1];
		  for (int i = 0; i <= size; i++) {
		            buffer[i] = other.buffer[i];
		        }
		instanceCount++;
		cout <<"[LogBuffer Deep Copied] capacity="<<capacity << endl;
	}

	LogBuffer& operator=(const LogBuffer &other) {

		if (this == &other) {
			 cout << "[Self-assignment detected — no operation]"
			                 << endl;

			return *this;
		}

		delete[] buffer;

		capacity = other.capacity;
		size = other.size;

		buffer = new char[capacity + 1];
		  for (int i = 0; i <= size; i++) {
		            buffer[i] = other.buffer[i];
		        }
		cout<<"[LogBuffer Assigned]"<<endl;
		return *this;
	}

	~LogBuffer() {
		delete[] buffer;
		instanceCount--;
        cout << "[LogBuffer Destroyed]" << endl;

	}
	void append(const char *msg) {
		const char *length = msg;
		while (*length != '\0') {
			length++;
		}

		int msglength = length - msg;
		int availablelength = capacity - size-1;

		int copylength = msglength;
		if (copylength > availablelength) {
			copylength = availablelength;
		}
		copy(msg,msg+copylength,buffer+size);
		size+=copylength;
		buffer[size]='\0';
	}
	void print() const {
		cout << buffer << endl;
	}
	void clear() {
		size = 0;
		buffer[0] = '\0';
	}
	static int getInstanceCount() {
		return instanceCount;
	}
};
int LogBuffer::instanceCount = 0;
int main() {

	LogBuffer log1(256);
	log1.append("Server started on port 8080");
	log1.append(" | Request recieved from 192.168.1.10");
	log1.print();

	LogBuffer log2 = log1;

	log2.append(" | cached response sent");
	cout << "log1 : ";
	log1.print();
	cout << "log2 : ";
	log2.print();

	LogBuffer log3(128);
	log3 = log1;
	cout<< "log3  : ";
	log3.print();

//	log1 = log1;  //whenever you want to run this program just uncomment this line. beacuse it shows error just uncomment and run even though you will get error  still you can run.
	log1.print();

	cout << "Live LogBuffer objects : " << LogBuffer::getInstanceCount()
			<< endl;

	return 0;
}

