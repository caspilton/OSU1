#include <stdio.h>

int main() {
  unsigned int n;
  double L;
  printf("Enter the unit number (1 - decimeter, 2 - kilometer, 3 - meter, 4 - millimeter, 5 - centimeter): ");
  scanf("%d", &n);
  while ((n > 5)||(n < 1)) {
    printf("Incorrect the unit number!\n");
    printf("Enter the unit number (1 - decimeter, 2 - kilometer, 3 - meter, 4 - millimeter, 5 - centimeter): ");
  }
  printf("Enter lenght: ");
  scanf("%lf", &L);
  switch(n) {
    case 1:
      L /= 10;
      break;
    case 2:
      L *= 1000;
      break;
    case 3:
      break;
    case 4:
      L /= 1000;
      break;
    case 5:
      L /= 100;
      break;
  }
  if (L == 1) printf("Lenght = 1 meter\n");
  else printf("Lenght = %lf meters\n", L);
}
