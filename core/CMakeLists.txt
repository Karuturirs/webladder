#set version
cmake_minimum_required(VERSION 3.5.2)
#multi line comments
#[==[
	some multi line comments here
	#[=[
		some multi line comments here
	#]=]
#]==]

#[===[
#custome command function or macro
# create macros to wrap commands that have output parameters
macro(mycommand input output)
	#...
endmacro()

function(my_command input output)
	#... Global scope can be set using parent_scope
	set(${output} .. PARENT_SCOPE)
endfunction()
mycommand(foo bar)
my_command(foo bar)
#]===]

# guard against in-source builds and bad build-type strings
#include(safeguards)

#set(CMAKE_BUILD_TYPE Debug)
#set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")

project(core)

add_executable(
 core
 src/Hello.cpp
)


#find_package(GTest REQUIRED)
#include_directory(${GTEST_INCLUDE_DIRS})
#[=[
add_executable(
 core-unit-test
 test/Hello-test.cpp

)

target_link_libraries(core-unit-test ${GTEST_LIBRARIES} pthread)
#]=]
