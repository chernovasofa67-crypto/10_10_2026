cmake_minimum_required(VERSION 4.2)
project(10_10_2026)

set(CMAKE_CXX_STANDARD 20)

add_executable(10_10_2026 main.cpp
        Visa.cpp
        Visa.h
        cmake-build-debug/Passport.cpp
        cmake-build-debug/Passport.h
        ForeignPassport.cpp
        ForeignPassport.h)
