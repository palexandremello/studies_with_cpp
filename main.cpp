
#include <iostream>
using namespace std;

class Rectangle {
private:
  int len;
  int bread;

public:
  Rectangle() { len = bread = 1; }
  Rectangle(int l, int b);
  int area();
  int perimeter();
  int getLength() { return len; }
  void setLength(int l) { len = l; }
  void changeLength(int l) { len = l; }
  ~Rectangle();
};

Rectangle::Rectangle(int l, int b) {
  len = l;
  bread = b;
};

int Rectangle::area() { return len * bread; };

int Rectangle::perimeter() { return 2 * (len + bread); };

Rectangle::~Rectangle() { cout << "Destructor called" << endl; };

int main() {
  Rectangle r(10, 5);

  cout << "Area is " << r.area() << endl;
  cout << "Perimeter is " << r.perimeter() << endl;
  r.changeLength(20);
  cout << "Area is " << r.area() << endl;
  return 0;
}
