cmake_minimum_required(VERSION 3.1)
project(SFML_Shader_Example)

set(CMAKE_CXX_STANDARD 14)

find_package(SFML 2.5 COMPONENTS graphics REQUIRED)

add_executable(SFML_Shader_Example main.cpp)
target_link_libraries(SFML_Shader_Example sfml-graphics)
