cmake_minimum_required(VERSION 2.8)

project(multidimgrid)

set(CMAKE_CXX_FLAGS "-std=c++11 ${CMAKE_CXX_FLAGS}")

add_custom_target(multidimgrid_headers SOURCES multidim_grid.hpp c++11_support.hpp)

# add_subdirectory(test)
add_subdirectory(example)

