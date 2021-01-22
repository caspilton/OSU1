#include <stdio.h>
#include <malloc.h>

int main()
{
  int *a;  // array pointer 
  unsigned int n; // count of array elements
  printf("Введите размер массива: ");
  scanf("%d", &n);
  // memory allocation
  a = (int*)malloc(n * sizeof(int));
  
  int min = 2147483647, max = -2147483648;
  unsigned int min_index = 0, max_index = 0;

  // input array elements, find min and max, their indices
  for (unsigned int i = 0; i < n; i++)
  {
    printf("a[%d] = ", i);
    scanf("%d", &a[i]);
    if (a[i] > max) {
      max = a[i];
      max_index = i;
    } 
    if (a[i] < min) {
      min = a[i];
      min_index = i;
    }
  }
  a[min_index] = max;
  a[max_index] = min;
  // output array elements
  for (unsigned int i = 0; i < n; i++)
    printf("a[%d] = %d\n", i, a[i]);
  free(a);
}
