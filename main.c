
#include <stdio.h>

int fun(int n) {

  if (n > 0) {
    printf("%d ", n); // 1 2 3 (3 2 1
    fun(n - 1);
    fun(n - 1);
  }
}

int main() {
  printf("%d ", fun(3)); // fun(3
  return 0;
}