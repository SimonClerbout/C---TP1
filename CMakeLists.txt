cmake_minimum_required( VERSION 3.0 )
project( MON_PROJET )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14 -Wall -Wextra" )
set( CMAKE_BUILD_TYPE Debug )  # dans la vraie vie, ne pas mettre cette ligne

add_executable( fibonacci src/main.cpp src/Fibonacci.cpp )