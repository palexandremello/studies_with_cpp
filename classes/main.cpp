#include <iostream>
using std::cout;
using std::endl;

#include "SalesScore.hpp"

int main()
{
    string storeTitle;
    SalesScore salesScore("Loja 1");
    SalesScore salesScore2("Loja 2 sasad3e123asdasd12");

    cout << "Loja 1 = " << salesScore.getStoreTitle() << endl;
    cout << "Loja 2 = " << salesScore2.getStoreTitle() << endl;
    return 0;
}