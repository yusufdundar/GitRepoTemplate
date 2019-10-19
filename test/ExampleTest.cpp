//
// Created by Yusuf Dündar on 16.10.2019.
//

#include <gtest/gtest.h>
#include "../src/Example.h"

TEST(ExampleTests, Accumulator){
int x = 43;
int y=34;
int sum = 50;
int oldSum = sum;
int newSum = oldSum + x*y;

    EXPECT_EQ(newSum,Accumulator(x,y,sum));
    EXPECT_EQ(newSum,sum)<< "Bu test başarısız oldu";

}

TEST(ExampleTests, Squre){
    int x = 5;
    int expectedSquare=x*x;

    EXPECT_EQ(expectedSquare,Square(x));


}