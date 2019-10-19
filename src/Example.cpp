//
// Created by Yusuf Dündar on 16.10.2019.
//

#include "Example.h"


int Accumulator(int x, int y, int &sum) {
    sum += x * y;
    return sum;
}

int Square(int x){

    return x*x;
}