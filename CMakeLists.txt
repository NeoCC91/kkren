cmake_minimum_required(VERSION 3.30)

project(kkren LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 23)

find_package(Eigen3 REQUIRED)
include_directories(${EIGEN3_INCLUDE_DIRS})

find_package(TBB REQUIRED)
find_package(Clipper2 REQUIRED)

add_executable(kkren main.cpp)

target_link_libraries(${PROJECT_NAME} TBB::tbb Clipper2::Clipper2)