cmake_minimum_required(VERSION 3.0)

# Project name
project(ErrnumLib C)

# Add the include directory for headers
include_directories(include)

# Add a library target for errnum.c
add_library(errnum STATIC src/errnum.c)

# Specify where the compiled library should be output
set_target_properties(errnum PROPERTIES OUTPUT_NAME "errnum")

# Optionally, specify the location of the output library
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_BINARY_DIR}/lib)

# This will generate liberrnum.a in the output directory
