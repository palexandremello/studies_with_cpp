
#include <iostream>
using namespace std;

class Rectangle {
private:
  int len;
  int bread;

public:
  void init(int l, int b) {
    len = l;
    bread = b;
  };

  int area() { return len * bread; }

  void changeLength(int l) { len = l; }
};

int main() {
  Rectangle r;

  r.init(10, 5);
  cout << "Area is " << r.area() << endl;
  r.changeLength(20);
  cout << "Area is " << r.area() << endl;
  return 0;
}
