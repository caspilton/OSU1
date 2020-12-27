#include <stdio.h>
#include <math.h>

double abs_f(double a) { // we need that, becouse abs(x) need int type 
  if (a >= 0) return a;
  return -a;
}

// we can use x < 0, but in not integer pow it will be uncertainty

// you can check Trushin's materials about pows on Youtube https://www.youtube.com/watch?v=h7hIt2ekYqA

int main() {
  double f, x, y, z;
  printf("Please, choose the values of y that fail expression y <= 0 and x < 0\n");
  scanf("%lf", &x);
  scanf("%lf", &y);
  scanf("%lf", &z);
  f = (0.4 * pow(x, 0.8) * 0.6) / (0.7 * pow(y, 0.8) * 0.6) + 0.9;
  printf("%lf", f);
}
