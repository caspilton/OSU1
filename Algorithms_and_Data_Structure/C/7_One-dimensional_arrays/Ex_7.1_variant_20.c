#include <stdio.h>
#include <malloc.h>

int main() // I did it without array realisation, becouse we can use less memory
{
  unsigned int n; // count of array elements
  printf("Введите размер массива: ");
  scanf("%d", &n);
  // memory allocation
  int min = 2147483647, max = -2147483648;
  unsigned int min_index = 0, max_index = 0;
  int a; 
  // input array elements, find min and max
  for (unsigned int i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a);
    if (i % 2 == 0) {
      if (a > max) max = a;
    }
    else
      if (a < min) min = a;
  }
  printf("max({a[2k]}) + min({a[2k + 1]}) = %d\n", (max + min));
}
