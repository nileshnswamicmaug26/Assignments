//============================================================================
// Name        : CPP_Assignment3.cpp
// Author      : Nilesh
// Version     :
// Copyright   : Your copyright notice
// Description : Hello World in C++, Ansi-style
//============================================================================

#include <iostream>
using namespace std;

enum class HttpStatus {
	OK = 200,
	Created = 201,
	BadRequest = 400,
	Unauthorized = 401,
	NotFound = 404,
	ServerError = 500
};
void handleResponse(HttpStatus status, const string &endpoint) {
	int s=static_cast<int>(status);
	switch (s) {
	case 200 :  cout<<"["<<endpoint<<"]"<<"      -> "<<s<<" OK           : Request successful"<<endl;
		break;
	case 201 :  cout<<"["<<endpoint<<"]"<<"      -> "<<s<<" Created  : Created Successfully"<<endl;
		break;
	case 400 :  cout<<"["<<endpoint<<"]"<<"      -> "<<s<<" BadRequest : Invalid Request"<<endl;
		break;
	case 401 :  cout<<"["<<endpoint<<"]"<<"      -> "<<s<<" Unauthorized : Authentication required"<<endl;
		break;
	case 404 :  cout<<"["<<endpoint<<"]"<<"      -> "<<s<<" Not Found : Endpoint does not exist"<<endl;
		break;
	case 500 :  cout<<"["<<endpoint<<"]"<<"      -> "<<s<<" Server Error : Internal server error — retry later"<<endl;
		break;
	default:cout<<""<<endl;
		break;
	}
}

int main() {

	handleResponse(HttpStatus::OK,"GET /api/users");
	handleResponse(HttpStatus::Unauthorized,"POST /api/login");
	handleResponse(HttpStatus::NotFound,"GET /api/products/99");
	handleResponse(HttpStatus::ServerError,"POST /api/order");
	return 0;
}
