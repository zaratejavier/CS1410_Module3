cmake_minimum_required(VERSION 3.8)
project(lec6)

set(CMAKE_CXX_STANDARD 11)

#set files to compile

#set(SOURCE_FILES functions.cpp)
#set(SOURCE_FILES functionsreturn.cpp)
#set(SOURCE_FILES functionsStruct.cpp)
#set(SOURCE_FILES Point.cpp)
#set(SOURCE_FILES Javier_Zarate_Hw2_task1.cpp)
set(SOURCE_FILES DistanceClassArguments.cpp)




add_executable(lec6 ${SOURCE_FILES})