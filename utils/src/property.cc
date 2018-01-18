#include <iostream>
#include <string>
#include <map>

using namespace std;

class property{
	
	map<string,string> properties;
	public:
	void get_property(const string& filepath){
		string token;
		ifstream myfile(filepath);
		if(myfile.is_open()){
			while(getline(myfile,token)){
				if(token.find('#') != 0 ){
					size_t pos = token.find('=');
					string key = token.substr(0,pos);
					string value = token.substr(pos+1);					   properties.insert(pair<string,string>(key,value));
				}
			}	
		}else{
		 	cout << "Not able to open the file:" << filepath <<endl;
		}
	}
}
