cmake_minimum_required(VERSION 3.10)

project(methods-smart)

set(CMAKE_CXX_STANDARD 17)

add_executable(methods-smart src/main.cpp src/cpp-files/SmartMethod.cpp src/header-files/SmartMethod.h src/cpp-files/Alternative.cpp src/header-files/Alternative.h src/cpp-files/Attribute.cpp src/header-files/Attribute.h src/cpp-files/NormalizedWeight.cpp src/header-files/NormalizedWeight.h src/cpp-files/AttributeRate.cpp src/header-files/AttributeRate.h src/cpp-files/EffectiveWeight.cpp src/header-files/EffectiveWeight.h)