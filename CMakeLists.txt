cmake_minimum_required(VERSION 3.19)
project(casaHuespuedes)

set(CMAKE_CXX_STANDARD 14)

add_executable(casaHuespuedes Home.cpp Home.h Owner.cpp Owner.h Guest.cpp Guest.h  Person.cpp Person.h Reservation.cpp Reservation.h Evaluation.cpp Evaluation.h Application.cpp Application.h Main.cpp)