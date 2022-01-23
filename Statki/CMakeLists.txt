cmake_minimum_required(VERSION 3.16)

project(statki)
include_directories(include)

add_executable(statki src/main.cpp src/players.cpp src/game.cpp include/game.h include/players.h)