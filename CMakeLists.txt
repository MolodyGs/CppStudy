# Establece la versión mínima de CMake requerida
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(MiProyecto)

# Especifica el estándar de C++ a utilizar
set(CMAKE_CXX_STANDARD 11)

# Agrega los directorios de los archivos de cabecera
include_directories(include)

# Agrega los archivos fuente para compilar el proyecto
add_executable(MiProyecto codes/test.cpp codes/Amber.cpp)