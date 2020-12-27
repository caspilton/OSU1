#include <stdio.h>
#include <math.h>

int main() {
  double x , y;
  printf("Domain of y(x): (-inf; + inf)\n");
  scanf("%lf", &x);
  y = 0.3 * x * (0.9 * pow(x, 2) + + 0.4 * pow(sin(pow(x, 9)), 3));
  printf("%lf", y);
}
