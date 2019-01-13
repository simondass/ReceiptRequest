cmake_minimum_required(VERSION 3.13)
project(RequestReceipt)

set(CMAKE_CXX_STANDARD 14)

add_executable(RequestReceipt main.cpp Service.cpp Service.h Client.cpp Client.h Controller.cpp Controller.h)