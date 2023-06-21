#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;


void hello() {
   cout << "Hello" << endl;
};

int cube(int value) {

  return value * value * value;

};

int main() {


   cout << boolalpha;
   cout << (true && true && true && true) << endl;
   cout << (false  || true) << endl;
   hello();
   cout << cube(10) << endl;
   return 0;

}
