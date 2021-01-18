#include <stdio.h>

int main() {
  double f = 1;
  printf("Input x (D(f) = R \ X, X - odd numbers [2:64]): ");
  int x;
  scanf("%d", &x);
  while ((x % 2 == 0) && (x <= 64) && (x >= 2)) {
    printf("Incorrect input!\n");
    printf("Input x (D(f) = R \\ X, X - odd numbers [2:64]): ");
    scanf("%d", &x);
  } 
  int i = x - 1;
  while (i >= x - 64) {
    f *= i;
    i -= 2;
  }
  i = x - 2;
  while (i >= x - 64) {
    f /= i;
    i -= 2;
  }
  printf("%lf", f);
}
