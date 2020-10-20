add_executable(shell-app depthEstimator.cpp  detTrack.cpp  ioHandler.cpp  main.cpp preprocess.cpp  robot.cpp  transformation.cpp )
target_link_libraries( shell-app ${OpenCV_LIBS} Eigen3::Eigen)


include_directories(
    ${CMAKE_SOURCE_DIR}/include
)
