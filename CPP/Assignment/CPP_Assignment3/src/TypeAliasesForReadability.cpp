/*
 * TypeAliasesForReadability.cpp
 *
 *  Created on: 02-Sep-2026
 *      Author: Nilesh
 */
#include<iostream>
#include<vector>
using namespace std;


using Header = pair<string,string>;
using HeaderList = vector<Header>;
using Port = unsigned int;
using IPAddress = string;

typedef unsigned long long requestID;

void printHeaders(const HeaderList& headers) {
	cout<<"Headers:"<<endl;
	for(const Header& header : headers) {
		cout<<header.first<<" : "<<" "<<header.second<<endl;
	}
}


int main() {

	HeaderList headers = { { "Content-Type", "application/json" }, {
			"Authorization", "Bearer eyJhbGci..." }, { "Accept-Language",
			"en-US" } };

	Port serverPort = 8080;
	requestID requestId = 1748293847;

	cout << "RequestID        :" << requestId << endl;
	cout << "Server Port      :" << serverPort << endl;
	printHeaders(headers);
	return 0;
}

