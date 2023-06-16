
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

double fore(int x, int n) {
  double s = 1;
  int i;
  double num = 1;
  double den = 1;

  for (i = 1; i <= n; i++) {
    num *= x;
    den *= i;
    s += num / den;
  }
  return s;
}

int fib(int n) {
  if (n <= 1) {
    return n;
  }

  return fib(n - 2) + fib(n - 1);
}

int forfib(int n) {
  int t0 = 0, t1 = 1, s = 0, i;
  if (n >= 0 && n <= 1) {
    return n;
  }

  for (i = 2; i <= n; i++) {
    s = t0 + t1;
    t0 = t1;
    t1 = s;
  }

  return s;
}

int farray[100];

int fibmem(int n) {

  if (n <= 1) {
    farray[n] = n;
    return n;
  } else {
    if (farray[n - 2] == -1) {
      farray[n - 2] = fibmem(n - 2);
    }
    if (farray[n - 1] == -1) {
      farray[n - 1] = fibmem(n - 1);
    };

    return farray[n - 2] + farray[n - 1];
  }
};
int main() {

  for (int i = 0; i < 100; i++) {
    farray[i] = -1;
  };
  int a = sum(5);
  int b = fact(5);
  int c = power(2, 9);
  int d = pow1(2, 9);
  double e = etaylor(1, 10);
  double f = newe(1, 10);
  double g = fore(1, 10);
  int h = fib(40);
  int j = fibmem(40);

  printf("%d ", a);
  printf("%d", b);
  printf(" %d ", c);
  printf(" %d ", d);
  printf(" %f ", e);
  printf(" %f ", f);
  printf(" %f ", g);
  printf("fib(7) = %d ", h);
  printf("fibmem(7) = %d ", j);
}