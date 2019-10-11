cmake_minimum_required(VERSION 3.14)
project(LuaEmbed)

set(CMAKE_CXX_STANDARD 11)
#set(CMAKE_CXX_FLAGS -llua)
#add_subdirectory(lua_source)
add_executable(LuaEmbed main.cpp speaker.cpp speaker.h lua_speaker.cpp lua_speaker.h)

target_link_libraries( LuaEmbed PUBLIC LuaLib )
# Sub-directories where more CMakeLists.txt exist
add_subdirectory(lua53)