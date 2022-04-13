cmake_minimum_required(VERSION 3.20)
project(DA)

set(CMAKE_CXX_STANDARD 14)

include_directories(Tests)

add_executable(DA
        Tests/Carrinha.cpp
        Tests/Ecomenda.cpp
        Tests/Cenario1.cpp
        Tests/Cenario2.cpp
        Tests/Cenario3.cpp
        Tests/readFiles.cpp
        main.cpp)