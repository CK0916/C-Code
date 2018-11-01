include(CMakeToolsHelpers OPTIONAL)

cmake_minimum_required(VERSION 2.8)

project(CMakeTest)

aux_source_directory(. DIR_ROOT_SRCS)

add_subdirectory(lib)

add_executable(CMakeTest main.cc ${DIR_ROOT_SRCS})

target_link_libraries(CMakeTest Printerlib)