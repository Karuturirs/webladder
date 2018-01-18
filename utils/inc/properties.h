#include<string>
#include<iostream>

using namespace std;

namespace utils{

string get_property(string property_name, string config_filename = "");

class properties {

public:
 static properties* instance();
 int set_config_path_file_name(string config_path_file_name);
 string get_property(string  property_name, string config_filename = "");

private:
 properties(){};
 properties(const properties&){};
 properties& operator=(const propeties&);
 static string config_path_file_name;
 static properties* m_pinstance;
};
}
