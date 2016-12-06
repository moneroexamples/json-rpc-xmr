cmake_minimum_required(VERSION 2.8)

add_subdirectory(jsonrpc)

project(myxrm)

set(SOURCE_FILES
		MicroCore.cpp
		tools.cpp
		CmdLineOptions.cpp)

# make static library called libmyxrm
# that we are going to link to
# in the root CMakeLists.txt file
add_library(myxrm
		STATIC
		${SOURCE_FILES})

target_link_libraries(myxrm
		myjsonrpc)