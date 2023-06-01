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

    if (title.length() <= 20)
        storeTitle = title;

    if (title.length() > 20)
    {
        storeTitle = title.substr(0, 20);
        cout << "O título da loja deve ter no máximo 20 caracteres!"
             << endl;
    }
}

string SalesScore::getStoreTitle()
{
    return storeTitle;
}

void SalesScore::bootSystem(string storeTitle)
{
    cout << "Score de Vendas!" << storeTitle << endl;
}
