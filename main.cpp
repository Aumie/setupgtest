#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include <iostream>
#include "Tests/test.h"

int main(int argc, char* argv[]) {
    testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
