#include <stdio.h>

int main() {
  unsigned int n;
  printf("Input n: ");
  scanf("%d", &n);
  double P = 1;
  for (int i = 2; i <= n; i++) P *= 1 - 1. / (i * i); 
  printf("%lf", P);
}
