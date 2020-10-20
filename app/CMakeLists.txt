add_executable(shell-app main.cpp)
target_link_libraries( shell-app ${OpenCV_LIBS} Eigen3::Eigen)


include_directories(
    ${CMAKE_SOURCE_DIR}/include
#	${OpenCV_INCLUDE_DIRS}
)
