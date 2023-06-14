
#include <stdio.h>

int fun(int n) {
  if (n > 100) {
    return n - 10;
  } else {
    return fun(fun(n + 11));
  }
}

int sum(int n) {
  if (n == 0) {
    return 0;
  }
  return sum(n - 1) + n;
}

int main() {
  int a = sum(5);
  printf("%d", a);
}