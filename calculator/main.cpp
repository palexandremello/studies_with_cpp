//
// Created by pmello on 6/2/23.
//

#include <iostream>

#include "Operations.h"
int main () {
    char opt, operatorSignal;
    double firstTherm, secondTherm;
    do {
        std::cout << "Write expression to be calculate" << std::endl;
        std::cin >> firstTherm >> operatorSignal >> secondTherm;

        Operations operations(firstTherm, secondTherm, operatorSignal);

        operations.calculate();
        std::cout << "Do you want continue? (y/n)" << std::endl;
        std::cin >> opt;

    } while (opt != 'n');

    return 0;
}