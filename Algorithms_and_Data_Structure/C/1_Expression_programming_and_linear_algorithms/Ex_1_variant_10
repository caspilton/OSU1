#include <stdio.h>
#include <math.h>
double abs_f(double a) { // we need that, becouse abs(x) need int type 
  if (a >= 0) return a;
  return -a;
}

// in fact, there is no need to write a separate function abs (x), because functions ln(x) and sqrt(x) have domain (0; + inf)
// D(sin(x)) = (-inf; +inf)
// D(ln(x)) = (0; +inf)
// D(abs(x)) = (-inf; +inf)
// D(sqrt(x)) = [0; +inf)
// D(arctg(x)) = (-inf; +inf)
// D(tg(x)) = R \ {x: x = pi / 2 + pi * n, n c Z}
// D(arcsin(x)) = [-1; 1]
// D(arccos(x)) = [-1; 1]
// D(y) = (0; 1]  

int main() {
  double x , y;
  printf("Domain of y(x): (0; +1]\n");
  scanf("%lf", &x);
  while (!((x > 0)&&(x <= 1))) {
    printf("Incorrect output! Please, enter right number!\nDomain of y(x): (0; +1]\n");
    scanf("%lf", &x);
  }
  y = (sin(x) * log(x)) / (abs_f(x)*sqrt(x) / (atan(x) * log(x) + 0.4 * log(x))) 
  * (0.2 * tan(x) - ((0.8 * asin(x) - 5.8) / 0.1 + pow(x, 0.2))/(atan(x) * acos(x) * 0.9));
  printf("%lf", y);
}
