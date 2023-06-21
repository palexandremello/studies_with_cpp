#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;



inline int soma (int a, int b);
void update(int &value);

void hello() {
   cout << "Hello" << endl;
};

int cube(int value) {

  return value * value * value;

};


double freqRC(double R, double C) {
   double freq;
   freq = 1 / (2*3.141592*R*C);
   return freq;
};

int var = 10;

int main() {

   int value = 2;
   int var = 20;
   cout << boolalpha;
   cout << (true && true && true && true) << endl;
   cout << (false  || true) << endl;
   hello();
   cout << cube(10) << endl;
   cout << freqRC(1000, 10E-9) << "Hz " << endl;
   cout << soma(10, 20) << endl;
   cout << value << endl;
   update(value);
   cout << "New value = " << value << endl;
   cout << ::var << endl;
   cout << var << endl;
   return 0;

}



inline int soma(int a, int b)  {

    return a + b;
}


void update(int &value) {

   value += 10;
}
