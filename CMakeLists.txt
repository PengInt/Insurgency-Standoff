cmake_minimum_required(VERSION 4.0)
project(Insurgency_Standoff)

set(CMAKE_CXX_STANDARD 26)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fopenmp")
if (WIN32)
    set(CMAKE_EXE_LINKER_FLAGS "${CMAKE_EXE_LINKER_FLAGS} -static-libgcc -static-libstdc++ -static")
endif()

include_directories(${CMAKE_SOURCE_DIR}/include)
link_directories(${CMAKE_SOURCE_DIR}/lib)

add_executable(Insurgency_Standoff main.cpp
        Soldier.cpp
        include/Soldier.hpp
        Weapon.cpp
        include/Weapon.hpp)

target_link_libraries(Insurgency_Standoff
        raylib
        opengl32
        gdi32
        winmm
)