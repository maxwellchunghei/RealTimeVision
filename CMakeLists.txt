cmake_minimum_required(VERSION 3.10)

project(RealTimeVision)

set(CMAKE_CXX_STANDARD 17)

find_package(OpenCV REQUIRED)

include_directories(
    ${OpenCV_INCLUDE_DIRS}
    ${CMAKE_SOURCE_DIR}/include
)

add_executable(RealTimeVision
    main.cpp
    src/VideoProcessor.cpp
)

target_link_libraries(RealTimeVision ${OpenCV_LIBS})
