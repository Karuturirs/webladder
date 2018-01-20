#include <iostream>
#include <fstream>
#include <string>
#include <map>

using namespace std;

class property{

	public:

	void get_property(const string& filepath, map<string,string>& properties){
		string token;
		ifstream myfile(filepath, std::ifstream::in);
		if(myfile.is_open()){
			while(getline(myfile,token)){
				if(token.find('#') != 0 ){
					size_t pos = token.find('=');
					string key = token.substr(0,pos);
					string value = token.substr(pos+1);
 					properties.insert(pair<string,string>(key,value));
				}
			}
			myfile.close();	
		}else{
		 	cout << "Not able to open the file:" << filepath <<endl;
		}
	}
};
