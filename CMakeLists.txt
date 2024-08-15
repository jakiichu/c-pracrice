cmake_minimum_required(VERSION 3.29)
project(c_pracrice C)

set(CMAKE_C_STANDARD 11)

add_executable(c_pracrice
        Gauss/index.c
        numerical-integration/index.c
        сauchy/index.c
        nonlinear-equation/index.c)
