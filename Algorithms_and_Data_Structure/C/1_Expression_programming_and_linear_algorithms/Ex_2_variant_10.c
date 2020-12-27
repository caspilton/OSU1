#include <stdio.h>
#include <math.h>

double abs_f(double a) { // we need that, becouse abs(x) need int type 
  if (a >= 0) return a;
  return -a;
}

int main() {
  double f, x, y, z;
  printf("Please, choose the values of x that fail expression (0.4 - pow(x, 0.7) * 0.7 = 0\n");
  scanf("%lf", &x);
  scanf("%lf", &y);
  scanf("%lf", &z);
  f = (pow(y, 0.6) * 0.7 + abs_f(z) * 0.5) / ((cos(z) * 0.5 * 0.7) / (((0.4 - pow(x, 0.7) * 0.7) * 0.8)));
  printf("%lf", f);
}
