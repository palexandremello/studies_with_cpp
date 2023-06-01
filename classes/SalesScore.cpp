#include <iostream>
using std::cin;
using std::cout;
using std::endl;
using std::fixed;

#include <iomanip>
using std::setprecision;

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

void SalesScore::bootSystem()
{
    cout << "Score de Vendas!" << getStoreTitle() << endl;
}

void SalesScore::calcSalesAverage()
{
    int acc = 0;
    int counter = 0;
    int value;
    double average;

    cout << "Digite o valor das vendas ou -1 para sair"
         << endl;

    cin >> value;

    while (value != -1)
    {
        acc += value;
        counter++;

        cout << "Digite o valor das vendas ou -1 para sair"
             << endl;

        cin >> value;
    }

    if (counter != 0)
    {
        average = static_cast<double>(acc) / counter;

        cout << endl
             << "Total de vendas: "
             << counter
             << " vendas R$: "
             << acc
             << endl;

        cout << "Media em vendas R$: "
             << setprecision(2)
             << fixed
             << average
             << endl;
    }
    else
    {
        cout << "Nenhum valor foi inserido" << endl;
    }
}