//
// Created by pmello on 6/1/23.
//

#include <iostream>

using std::cout;
using std::cin;
using std::endl;
using std::fixed;

#include <iomanip>
#include "LinearEquation.h"

using std::setw;
using std::setprecision;

int main () {


    for (int i = -12 ; i <= 47 ; i++) {

        LinearEquation equation(i);

        int y = equation.calculateY();
        cout << " X = " << i << "  Y  = " << y << endl;

    }
}