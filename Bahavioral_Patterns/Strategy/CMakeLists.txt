cmake_minimum_required(VERSION 2.5)

project(strategy)

aux_source_directory(. SRC_DIR)

add_executable(demo ${SRC_DIR})