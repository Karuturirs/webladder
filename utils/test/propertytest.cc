#include "src/property.cc"
#include <gtest/gtest.h>

TEST(PropertyReaderTest,PositiveCases){
	property prop;
	map<string,string> mp;
	prop.get_property("/home/ravi/Documents/github/webladder/config/webladder.properties",mp);
	ASSERT_EQ("value",mp["key"]);

}

int main(int argc, char **argv) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
