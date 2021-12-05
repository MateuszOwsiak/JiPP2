cmake_minimum_required(VERSION 3.16)

project(notatnik)
include_directories(include)

add_executable(notatnik src/main.cpp src/note.cpp src/textnote.cpp src/listnote.cpp src/notedirector.cpp)