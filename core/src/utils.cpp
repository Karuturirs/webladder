#include<iostream>
#include<fstream>
#include<string>
using namespace std;

int main(){
	string line;
	ifstream myfile("/home/ravi/Documents/github/webladder/config/webladder.properties");
	if(myfile.is_open()){
	 	while(getline(myfile,line)){
			cout << line <<endl;
		}
	}else{
		cout << "not able to open file" <<endl;
	}

}
