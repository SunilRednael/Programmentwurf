# define the minimum cmake version
cmake_minimum_required(VERSION 3.16)

# define the project name
project(Programmentwurf VERSION 1.0 LANGUAGES C)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic -O0)

add_executable(src/main.c src/developer.c src/developer_group.c)

add_library(lib1 Static src/developer.c src/developer_group.c src/main.c)

target_include_directories(lib1 PUBLIC include)

add_executable(src/developer_group )