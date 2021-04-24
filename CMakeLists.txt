cmake_minimum_required(VERSION 3.19)
project(TileEditor)

set(CMAKE_CXX_STANDARD 20)
set(CMAKE_AUTOMOC ON)
set(CMAKE_AUTORCC ON)
set(CMAKE_AUTOUIC ON)

add_subdirectory(TileEditor_main)
add_subdirectory(TileEditor_test)
add_subdirectory(TileEditor_ui)
