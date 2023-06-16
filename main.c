
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

int pow1(int m, int n) {
  if (n == 0)
    return 1;

  if (n % 2 == 0)
    return pow1(m * m, n / 2);
  return m * pow1(m * m, (n - 1) / 2);
}

double etaylor(int x, int n) {
  static double p = 1, f = 1;
  double r;

  if (n == 0) {
    return 1;
  }

  r = etaylor(x, n - 1);
  p = p * x;
  f = f * n;
  return r + (p / f);
}

double newe(int x, int n) {
  static double s = 1;
  if (n == 0)
    return s;
  s = 1 + x * s / n;
  return newe(x, n - 1);
}
int main() {
  int a = sum(5);
  int b = fact(5);
  int c = power(2, 9);
  int d = pow1(2, 9);
  double e = etaylor(1, 10);
  double f = newe(1, 10);

  printf("%d ", a);
  printf("%d", b);
  printf(" %d ", c);
  printf(" %d ", d);
  printf(" %f ", e);
  printf(" %f ", f);
}