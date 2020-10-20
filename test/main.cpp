/**
 *  @file    main.cpp
 *  @author  Vasista (clueless-bachu)
 *  @author  Vishnuu (vishnuu95)
 *  @brief Main file that runs all unit tests
 *  @copyright MIT License (c) 2020 Vasista and Vishnuu.
 */
#include <gtest/gtest.h>

/**
* @brief main function which runs all defined unit test cases
* @param None
* @return None
*/
int main(int argc, char **argv) {
  ::testing::InitGoogleTest(&argc, argv);
  return RUN_ALL_TESTS();
}
