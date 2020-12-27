#include <stdio.h>
// Option where different number will output in different sentenses is too easy. So, I did this solution.
int main() {
  int a, b, c, k;
  printf("Input a, b, c, k: ");
  scanf("%d", &a);
  scanf("%d", &b);
  scanf("%d", &c);
  scanf("%d", &k);
  if (a % k == 0) 
    if (b % k == 0) 
      if (c % k == 0) 
        printf("k = %d is denominator of a = %d, b = %d, c = %d", k, a, b, c);
      else
         printf("k = %d is denominator of a = %d, b = %d", k, a, b);
    else
      if (c % k == 0) 
        printf("k = %d is denominator of a = %d, c = %d", k, a, c);
      else
         printf("k = %d is denominator of a = %d", k, a);
  else 
    if (b % k == 0) 
      if (c % k == 0) 
        printf("k = %d is denominator of b = %d, c = %d", k, b, c);
      else
         printf("k = %d is denominator of b = %d", k, b);
    else
      if (c % k == 0) 
        printf("k = %d is denominator of c = %d", k, c);
      else
         printf("k = %d is not denominator of inputed numbers", k);
}
