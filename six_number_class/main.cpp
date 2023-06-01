#include <iostream>
using std::cout;
using std::endl;

#include "ReadIntNumbers.hpp"

int main()
{
    ReadIntNumbers readIntNumbers("Sistema de operações Matemáticas");

    readIntNumbers.bootSystem();
    readIntNumbers.calculateAllMetrics();
}