project(utils)
cmake_minimum_required(VERSION 3.5.2)
 
# Locate GTest
find_package(GTest REQUIRED)
include_directories(${GTEST_INCLUDE_DIRS})
 
# Link runTests with what we want to test and the GTest and pthread library
add_executable(
	utils
	src/property.cpp
	)

add_executable(
	utilstest
	test/propertytest.cpp
)
target_link_libraries(utilstest  ${GTEST_LIBRARIES} pthread)
