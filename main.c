
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

int fact(int n) {
  if (n == 0) {
    return 1;
  }
  return fact(n - 1) * n;
}

int power(int m, int n) {
  if (n == 0)
    return 1;
  return power(m, n - 1) * m;
}
int main() {
  int a = sum(5);
  int b = fact(5);
  int c = power(2, 9);
  printf("%d ", a);
  printf("%d", b);
  printf(" %d ", c);
}