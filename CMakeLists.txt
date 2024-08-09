cmake_minimum_required(VERSION 3.0 FATAL_ERROR)
project(mda_nn)

# set cmake_prefix_path to the directory where libtorch is installed including current list dir
set(CMAKE_PREFIX_PATH ${CMAKE_CURRENT_LIST_DIR}/libtorch)

find_package(Torch REQUIRED)

# add shared library
add_library(mda_nn SHARED neural_network.cpp)
target_link_libraries(mda_nn "${TORCH_LIBRARIES}")
set_property(TARGET mda_nn PROPERTY CXX_STANDARD 17)