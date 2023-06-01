#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main()
{
    int val = 14;

    if (val > 12)
    {
        cout << "Valor maior que 12" << endl;
    }
    else
    {
        cout << "Valor menor ou igual a 12" << endl;
    }

    cout << (val ? "Valor maior que 12"
                 : "Valor menor que 12")
         << endl;

    int temperature = 25;

    if (temperature > 40)
    {
        cout << "Muito calor" << endl;
    }
    else if (temperature > 30)
    {
        cout << "Calor" << endl;
    }
    else if (temperature > 20)
    {
        cout << "Tempreatura ok" << endl;
    }
    else if (temperature > 10)
    {
        cout << "Frio" << endl;
    }

    return 0;
}