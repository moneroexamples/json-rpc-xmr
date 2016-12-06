cmake_minimum_required(VERSION 2.8)

set(SOURCE_FILES
        MyStubServer.cpp)

# make static library called libmyxrm
# that we are going to link to
# in the root CMakeLists.txt file
add_library(myjsonrpc
        STATIC
        ${SOURCE_FILES})
