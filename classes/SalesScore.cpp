#include <iostream>
using std::cout;
using std::endl;

#include <string> // classe de string no padrão C++
using std::string;
#include "SalesScore.hpp"

SalesScore::SalesScore(string title)
{
    setStoreTitle(title);
}

void SalesScore::setStoreTitle(string title)
{
    storeTitle = title;
}

string SalesScore::getStoreTitle()
{
    return storeTitle;
}

void SalesScore::bootSystem(string storeTitle)
{
    cout << "Score de Vendas!" << storeTitle << endl;
}
