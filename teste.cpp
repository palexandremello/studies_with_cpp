#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;


void hello() {
   cout << "Hello" << endl;
};

int main() {


   cout << boolalpha;
   cout << (true && true && true && true) << endl;
   cout << (false  || true) << endl;
   hello();
   return 0;

}
