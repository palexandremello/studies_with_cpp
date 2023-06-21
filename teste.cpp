#include <iostream>

using std::cin;
using std::cout;
using std::endl;
using std::boolalpha;

#include <iomanip>
using std::setw;

#include <cstdlib>
using std::rand;
using std::srand;

#include <ctime>
using std::time;



void randomNumbers(int numbers, unsigned min, unsigned max);
inline unsigned rangeRand(unsigned first, unsigned range);

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
   char opt = 0;
   int num = 0;
   unsigned min, max;
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

   do {
        cout << "Sortear quantos numeros? ";
        cin >> num;
        cout << "Qual o valor minimo?";
        cin >> min;
        cout << "Qual é o valor maximo?";
        cin >> max;

        srand(time(0));
        randomNumbers(num, min, max);
        cout << endl << endl << "Novo Sorteio? (s) or (n): ";
        cin >> opt;
  } while (opt != 'n');
   return 0;

}



void randomNumbers(int numbers, unsigned  min, unsigned max) {
     for (int i = 1; i <= numbers; i++) {
          cout << setw(5) << rangeRand(min, max);

          if (i % 2 == 0)
              cout << endl;
 }
}


inline unsigned rangeRand(unsigned first, unsigned range) {

     return  first + (rand() % range);
}

inline int soma(int a, int b)  {

    return a + b;
}


void update(int &value) {

   value += 10;
}
