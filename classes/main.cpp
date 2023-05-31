#include <iostream>
using std::cout;
using std::endl;

#include <string> // classe de string no padrão C++

using std::string;

class SalesScore
{
public:
    SalesScore(string title)
    {
        setStoreTitle(title);
    }

    void setStoreTitle(string title)
    {
        storeTitle = title;
    }

    string getStoreTitle()
    {
        return storeTitle;
    }

    void bootSystem(string storeTitle)
    {
        cout << "Score de Vendas!" << storeTitle << endl;
    }

private:
    string storeTitle;
};

int main()
{
    string storeTitle;
    SalesScore salesScore("Loja 1");
    SalesScore salesScore2("Loja 2");

    cout << "Loja 1 = " << salesScore.getStoreTitle() << endl;
    cout << "Loja 2 = " << salesScore2.getStoreTitle() << endl;
    return 0;
}