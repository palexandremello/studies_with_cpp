
#include <stdio.h>

int loop(int n) {

  if (n == 0)
    return -1;
  return loop(n - 1) + n;
}

int main() {

  printf("%d", loop(4));
  return 0;
}