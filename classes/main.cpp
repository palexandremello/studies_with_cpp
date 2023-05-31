#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string> // classe de string no padrão C++

using std::getline;
using std::string;

class SalesScore
{
public:
    void bootSystem(string storeTitle)
    {
        cout << "Score de Vendas!" << storeTitle << endl;
    }
};

int main()
{
    string storeTitle;

    cout << "Digite o nome da loja: ";
    cin >> storeTitle;

    SalesScore salesScore;

    salesScore.bootSystem(storeTitle);

    return 0;
}