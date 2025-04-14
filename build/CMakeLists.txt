# Establece la versión mínima de CMake requerida
cmake_minimum_required(VERSION 3.10)

# Nombre del proyecto
project(project)

# Especifica el estándar de C++ a utilizar
set(CMAKE_CXX_STANDARD 11)

# Agrega los directorios de los archivos de cabecera
include_directories(../codes/include)

# Add executables for the MPM-GEOMECHANICS project
file(GLOB_RECURSE EXECUTABLES "../codes/*.cpp")
add_executable(project ${EXECUTABLES})
set_target_properties(project PROPERTIES LINK_FLAGS "-mconsole")
