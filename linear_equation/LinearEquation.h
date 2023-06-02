//
// Created by pmello on 6/1/23.
//

#ifndef LEARNING_CPP_LINEAREQUATION_H
#define LEARNING_CPP_LINEAREQUATION_H


class LinearEquation {

public:
    LinearEquation(int x);
    void setXValue(int x);
    int getXValue();
    int calculateY();


private:
    int x_value;
    int y;
};


#endif //LEARNING_CPP_LINEAREQUATION_H
