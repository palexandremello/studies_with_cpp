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

    int temperature;

    cout << "Digite a temperatura: ";
    cin >> temperature;

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
    else
    {
        cout << "Muito frio" << endl;
    }

    int nota;

    cout << "Digite a nota: " << endl;

    cin >> nota;

    if (nota < 0 || nota > 100)
    {
        cout << "Entrada Inválida" << endl;
    }
    else if (nota >= 90 && nota <= 100)
    {
        cout << "Grau A" << endl;
    }
    else if (nota >= 80 && nota <= 89)
    {
        cout << "Grau B" << endl;
    }
    else if (nota >= 70 && nota <= 79)
    {
        cout << "Grau C" << endl;
    }
    else
    {
        cout << "REPROVADO" << endl;
    }
    return 0;
}