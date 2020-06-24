#include <gtest/gtest.h>
#include <gmock/gmock.h>
#include "test.h"

using testing::Eq;

namespace {
    class  ClassA: public testing::Test{
    public:
        A obj;
        ClassA(){
            obj;
        }
    };
}

TEST_F(ClassA, test1){
ASSERT_EQ("","");
}

TEST_F(ClassA, test2){
ASSERT_EQ(1,2);
}
