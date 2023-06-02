//
// Created by pmello on 6/1/23.
//

#include "LinearEquation.h"


LinearEquation::LinearEquation(int x) {

    setXValue(x);
}

void LinearEquation::setXValue(int x) {
    x_value = x;
}

int LinearEquation::getXValue() {

    return x_value;
}

int LinearEquation::calculateY() {

    y = (4 * getXValue()) - 53;
    return y;
}