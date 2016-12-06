# now build myext library from other files
project(myext)

set(SOURCE_FILES
        format.cc
        date/tz.cpp)

# make static library called libmyxrm
# that we are going to link to
# in the root CMakeLists.txt file
add_library(myext
        STATIC
        ${SOURCE_FILES})


