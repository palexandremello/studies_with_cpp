#include <iostream>
using std::cin;
using std::cout;
using std::endl;

#include <string>
using std::string;

#include "ReadIntNumbers.hpp"

ReadIntNumbers::ReadIntNumbers(string title)
{
    setClassTitle(title);
}

void ReadIntNumbers::setClassTitle(string title)
{
    classTitle = title;
}

string ReadIntNumbers::getClassTitle()
{
    return classTitle;
}

void ReadIntNumbers::bootSystem()
{
    cout << getClassTitle() << endl;
}

void ReadIntNumbers::calculateAllMetrics()
{

    int counter = 0;
    cout << "Entre com 6 números inteiros: " << endl;

    int number1, number2, number3, number4, number5, number6;

    cin >> number1 >> number2 >> number3 >> number4 >> number5 >> number6;

    cout << number1 << " " << number2 << " " << number3 << " " << number4 << " " << number5 << " " << number6 << endl;
    calcSum(number1, number2);
    calcSubtraction(number3, number4);
    calcMultiplication(number5, number6);
}

void ReadIntNumbers::calcSum(int firstTerm, int secondTerm)
{

    int sum = firstTerm + secondTerm;
    cout << "A soma dos dois números é: " << sum << endl;
}

void ReadIntNumbers::calcSubtraction(int firstTerm, int secondTerm)
{

    int subtraction = firstTerm - secondTerm;
    cout << "A subtração dos dois números é: " << subtraction << endl;
}

void ReadIntNumbers::calcMultiplication(int firstTerm, int secondTerm)
{

    int multiplication = firstTerm * secondTerm;
    cout << "A multiplicação dos dois números é: " << multiplication << endl;
}