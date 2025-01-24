## Pasos Iniciales

- Crear archivo `CMakeLists.txt`
- Crear carpeta `build`
- Identificar carpeta donde están los archivo `.cpp`

Estructura de carpetas de referencia:

```
/mi-proyecto
│
├── include/ # Carpeta que contiene los archivos .h
│ └── Amber.h
├── src/ # Carpeta que contiene los archivos .cpp
│ └── Amber.cpp
│ └── test.cpp
├── build/
├── CMakeLists.txt # Archivo de configuración de CMake
```

Estrucutra de archivo `CMakeLists.txt`

```

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
```

## Inicialización de CMake

dentro de la carpeta build, ejecutar `cmake -G "MinGW Makefiles" ..` (Si tienes instalador MinGw). Es importante que sea con los puntos al final (..) ya que esto hace que cmake busque al archivo CMakeLists.txt en el directorio superior.

Esto generará un archivo `.exe` dentro de `Build`. En mi caso es `MiProyecto.exe`, ya que este es el nombre definido en el archivo `CMakeLists.txt`.

## Ejecutar Proyecto

con el comando `cmake --build .` es posible ejecutar el proyecto en cuestión.
