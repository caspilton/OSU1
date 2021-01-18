#include <stdio.h>
#include <math.h>

void addition(int a, int b) {
  printf("Addition table:\n");
  printf("%4d ", 0);
  for (int i = a; i <= b; i++) printf("%4x ", i);
  printf("\n");
  for (int i = a; i <= b; i++) {
    printf("%4x ", i);
    for (int j = a; j <= b; j++) printf("%4x ", i+j);
    printf("\n");  
  }
}

void multiplication(int a, int b) {
  printf("Multiplication table:\n");
  printf("%4d ", 0);
  for (int i = a; i <= b; i++) printf("%4x ", i);
  printf("\n");
  for (int i = a; i <= b; i++) {
    printf("%4x ", i);
    for (int j = a; j <= b; j++) printf("%4x ", i*j);
    printf("\n");  
  }
}

int main() {
  int a, b;
  scanf("%d", &a);
  scanf("%d", &b);
  addition(a, b);
  printf("\n"); 
  multiplication(a, b);
}
