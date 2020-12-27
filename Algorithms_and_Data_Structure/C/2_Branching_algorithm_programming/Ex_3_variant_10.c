#include <stdio.h>

short int triangle_exist(double a, double b, double c) {
  if ((a + b > c) && (a + c > b) && (b + c > a)) return 1;
  return 0;
}

int main() {
  double a, b, c;
  printf("Input side lenghts of a triangle: ");
  scanf("%lf", &a);
  scanf("%lf", &b);
  scanf("%lf", &c);
  if (triangle_exist(a, b, c))
    if ((a == b) || (a == c) || (b == c)) printf("The triangle is isosceles\n");
    else printf("The triangle isn't isosceles\n");
  else printf("This triangle does not exist!");
}
