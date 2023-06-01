#include <iostream>
using std::cout;
using std::endl;

#include "SalesScore.hpp"

int main()
{
    SalesScore salesScore("Loja 1");

    salesScore.bootSystem();
    salesScore.calcSalesAverage();
}