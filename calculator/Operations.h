//
// Created by pmello on 6/2/23.
//

#ifndef LEARNING_CPP_OPERATIONS_H
#define LEARNING_CPP_OPERATIONS_H


class Operations {
public:
    Operations(double firstTherm, double secondTherm, char operatorSignal);
    char getOperationToBeCalcuate();
    void calculate();
    void sumOperation();
    void subtractionOperation();
    void multiplyOperation();
    void dividedOperation();
    void expOperation();

private:
    double value1, value2;
    char mathOption;
};


#endif //LEARNING_CPP_OPERATIONS_H
