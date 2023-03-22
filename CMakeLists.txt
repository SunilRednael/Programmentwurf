# define the minimum cmake version
cmake_minimum_required(VERSION 3.16)

# define the project name
project(Programmentwurf VERSION 1.0 LANGUAGES C)

# define the c standard version
set(CMAKE_C_STANDARD 11)
set(CMAKE_C_STANDARD_REQUIRED True)

# add some compile options
add_compile_options(-Wall -Wextra -pedantic -O0)

# add a new library
add_library(lib1 STATIC src/developer.c src/developer_group.c)

# add the includes to the library
target_include_directories(lib1 PUBLIC include)

# add an executable and assign files to it
add_executable(exec_main src/main.c)

# add the include directories 
target_include_directories(exec_main PUBLIC include)

# link libraries
target_link_libraries(exec_main PRIVATE lib1)