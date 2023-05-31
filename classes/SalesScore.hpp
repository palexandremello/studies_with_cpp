#include <iostream>
using std::cout;
using std::endl;

#include <string> // classe de string no padrão C++

using std::string;

class SalesScore
{
public:
    SalesScore(string title);
    void setStoreTitle(string title);
    string getStoreTitle();
    void bootSystem(string storeTitle);

private:
    string storeTitle;
};
