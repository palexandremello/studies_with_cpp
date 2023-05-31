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
