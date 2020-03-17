#the file is main makelists for the whole project

#specify minimum version of cmake
cmake_minimum_required(VERSION 3.5)

#project name
project(test)

#add subdirectory including CMakeLists.txt
add_subdirectory(./HelloWorld)

#specify executable file name
add_executable(${PROJECT_NAME} ./main.cpp)

#link libraries
target_link_libraries(${PROJECT_NAME} HelloWorld)

