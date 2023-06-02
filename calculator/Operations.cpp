//
// Created by pmello on 6/2/23.
//
#include <iostream>

using std::cout;
using std::endl;

#include <cmath>

#include "Operations.h"

Operations::Operations(double firstTherm, double secondTherm, char operatorSignal) {
    value1 = firstTherm;
    value2 = secondTherm;
    mathOption = operatorSignal;
}

void Operations::calculate() {
    switch(mathOption) {

        case '+':
            sumOperation();
            break;

        case '-':
            subtractionOperation();
            break;
        case '*':
            multiplyOperation();
            break;
        case '/':
            dividedOperation();
            break;
        case '^':
            expOperation();
            break;
        default:
            cout << "Its not a math operation" << endl;
    }
}

void Operations::sumOperation() {
    int sum = 0;

    sum = value1 + value2;

    cout << sum << endl;
}

void Operations::subtractionOperation() {
    int substraction = 0;

    substraction = value1 - value2;

    cout << substraction << endl;
}

void Operations::multiplyOperation() {
    int multiplied = 0;

    multiplied = value1 * value2;

    cout << multiplied << endl;
}

void Operations::dividedOperation() {
    int division = 0;

    division = value1 / value2;

    cout << division << endl;
}

void Operations::expOperation() {
    int exp = 0;

    exp = pow(value1, value2);
    cout << exp << endl;

}