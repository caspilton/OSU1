#include <stdio.h>

int main() {
  double x, f = 1;
  printf("Input x (D(f) = R \ X, X - odd numbers [2:64]): ");
  scanf("%lf", &x);
  while ((x % 2 == 0) && (x <= 64) && (x >= 2)) {
    printf("Incorrect input!\n");
    printf("Input x (D(f) = R \ X, X - odd numbers [2:64]): ");
    scanf("%lf", &x);
  }
  for (int i = x - 1; i >= x - 64; i -= 2) f *= i;
  for (int i = x - 2; i >= x - 64; i -= 2) f /= i;
  printf("%lf", f);
}
