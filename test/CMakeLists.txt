cmake_minimum_required(VERSION 3.10)
project(TestUsuarios)

set(CMAKE_CXX_STANDARD 17)

# Incluir directorios donde están tus headers
include_directories(
    ../Core
    ../DataStructures
)

# Archivos fuente que deseas compilar
set(SOURCES
    test.cpp
    ../DataStructures/ArbolBinarioBusqueda.cpp
)

# Crear el ejecutable
add_executable(test ${SOURCES})
target_include_directories(test PRIVATE ../Core ../DataStructures)