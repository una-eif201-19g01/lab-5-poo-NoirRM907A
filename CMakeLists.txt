cmake_minimum_required(VERSION 3.14)

project(Trabajador)

set(CMAKE_CXX_STANDARD 14)

set(SOURCE_FILES main.cpp Trabajador.cpp Trabajador.h Gerente.cpp Gerente.h Secretaria.cpp Secretaria.h Vendedor.cpp Vendedor.h)

add_executable(Trabajador ${SOURCE_FILES})