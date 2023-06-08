
#include <stdio.h>

struct Rectangle {
  int len;
  int bread;
};

void init(struct Rectangle *r, int l, int b) {
  r->len = l;
  r->bread = b;
};

int area(struct Rectangle r) { return r.len * r.bread; };

void changeLength(struct Rectangle *r, int l) { r->len = l; }

int main() {

  struct Rectangle r;
  init(&r, 10, 5);
  printf("Area is %d\n", area(r));
  changeLength(&r, 20);
  printf("Area is %d\n", area(r));
  return 0;
}