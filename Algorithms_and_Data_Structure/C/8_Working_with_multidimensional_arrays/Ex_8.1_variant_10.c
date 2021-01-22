#include <malloc.h>

int main()
{
  int n;
  printf("Input matrix rank: ");
  scanf("%d", &n);
  // memory allocation
  int **a = malloc(n * sizeof(int*));
    for (int i = 0; i < n; ++i)
        *(a + i) = (int*) calloc(n, sizeof(int));
  // filling array elements
  for (int i = 0; i < n; i++)  // cycle through lines
  {
    for (int j = 0; j < n; j++)  // loop through columns
    {
      if (i >= j)
        *(*(a + i) + j) = n - (i - j);
      else 
        *(*(a + i) + j) = 0;
    }
  }
  // Вывод элементов массива
  for (int i = 0; i < n; i++)  // цикл по строкам
  {
    printf("||");
    for (int j = 0; j < n; j++)  // цикл по столбцам
    {
      printf("%3d ", a[i][j]); // 5 знакомест под элемент массива
    }
    printf("||\n");
  }
  free(a);
}
