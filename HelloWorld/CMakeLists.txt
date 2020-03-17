#the file is makelists for the HelloWorld model

#model name
project(HelloWorld)

#add all source file to variable HELLOWORLD_SRC
aux_source_directory(./src HELLOWORLD_SRC)

#create static library
add_library(${PROJECT_NAME} STATIC ${HELLOWORLD_SRC})