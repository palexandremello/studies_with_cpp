
#include <iostream>
using namespace std;

int main()
{
    int val;

    std::cout << "Enter a number: \a";
    std::cin >> val;
    std::cout << "You entered: " << val << std::endl;

    int num1, num2;

    std::cout << "Enter two numbers: \a";
    std::cin >> num1 >> num2;
    std::cout << "You entered: " << num1 << " and " << num2 << std::endl;

    std::cout << "The multiplication of "
              << num1 << " and "
              << num2 << " is "
              << num1 * num2 << std::endl;

    std::cout << "The division of "
              << num1 << " and "
              << num2 << " = "
              << (float)num1 / num2 << std::endl;

    if (num1 > num2)
    {
        std::cout << "\n"
                  << num1 << " is greater than " << num2 << std::endl;
    }
    else if (num1 == num2)
    {
        std::cout << num1
                  << " is equal to " << num2 << std::endl;
    }
    else
    {
    std:
        cout << num1
             << " is less than " << num2 << std::endl;
    }
    return 0;
}
