#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::fixed;


#include <iomanip>
using std::setw;
using std::setprecision;

#include <cmath>
using std::pow;

int main()
{
    double a;
    double p;
    double r;
    int    n;

    cout << "Insira o valor do aporte R$: ";
    cin >> p;

    cout << endl << "Insira o numero de anos: ";
    cin >> n;

    cout << "Insira a taxa de juros ao ano em %: ";
    cin >> r;

    cout << "Ano " << setw(20) << "Valor do deposito" << endl;
    cout << fixed << setprecision(2);

    for (int ano = 1; ano <= n; ano++) {

        a = p * pow(1.0 + r / 100, ano);
        cout << setw(3) << ano << setw(20) << a << endl;
    }
 }
