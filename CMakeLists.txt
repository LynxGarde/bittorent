cmake_minimum_required(VERSION 3.0)
project(bittorrent LANGUAGES C)
#add_compile_options(-Wall -Wextra -pedantic -Werror -g -std=c99)
add_definitions(-Wall -Wextra -pedantic -Werror -g -std=c99)
SET(CMAKE_EXE_LINKER_FLAGS  "${CMAKE_EXE_LINKER_FLAGS} -lreadline")
include_directories(
    ${CMAKE_SOURCE_DIR}/src/
)

file(GLOB_RECURSE SOURCE RELATIVES ${CMAKE_SOURCE_DIR} "src/*.c" "src/*.h")

add_executable(my-bittorrent ${SOURCE})
