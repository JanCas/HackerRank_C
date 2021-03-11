cmake_minimum_required(VERSION 3.19)
project(HackerRank C)

set(CMAKE_C_STANDARD 11)

add_executable(HackerRank HelloWorld/helloworld.c "Playing with Chars/playingwithcars.c" sum/sum.c)