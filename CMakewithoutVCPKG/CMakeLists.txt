cmake_minimum_required(VERSION 3.10)

project(CMakewithoutVCPKG)

add_executable(CMakewithoutVCPKG "CMakewithoutVCPKG.cpp" "CMakewithoutVCPKG.h")

# Add the library
add_subdirectory(lib/plog-master)

# Link the library
target_link_libraries(CMakewithoutVCPKG PRIVATE plog)