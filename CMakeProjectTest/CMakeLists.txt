# CMakeList.txt : CMake project for CMakeProjectTest, include source and define
# project specific logic here.
#
cmake_minimum_required (VERSION 3.10)

# Enable Hot Reload for MSVC compilers if supported.
if (POLICY CMP0141)
  cmake_policy(SET CMP0141 NEW)
  set(CMAKE_MSVC_DEBUG_INFORMATION_FORMAT "$<IF:$<AND:$<C_COMPILER_ID:MSVC>,$<CXX_COMPILER_ID:MSVC>>,$<$<CONFIG:Debug,RelWithDebInfo>:EditAndContinue>,$<$<CONFIG:Debug,RelWithDebInfo>:ProgramDatabase>>")
endif()

project ("CMakeProjectTest")

# Find fmt library using CMake config file
find_package(fmt CONFIG REQUIRED)

# Add source to this project's executable.
add_executable (CMakeProjectTest   "src/main.cpp")

# Tells the compiler/linker that the executable should link against the fmt library
target_link_libraries(CMakeProjectTest PRIVATE fmt::fmt)

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET CMakeProjectTest PROPERTY CXX_STANDARD 20)
endif()

# TODO: Add tests and install targets if needed.
