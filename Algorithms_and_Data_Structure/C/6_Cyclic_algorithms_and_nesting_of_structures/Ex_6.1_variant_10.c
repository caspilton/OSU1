#include <stdio.h>

int main(void) {
	unsigned int multiplication;
  scanf("%d", &multiplication);
  if (multiplication % 2 == 0) {
    printf("Impossible! Multiplication of odd nummber isn't even number!\n");
  } 
  else {
    unsigned int count = 1;
    unsigned int m = 1;
    for (int i = 3; m < multiplication; i += 2) {
      m *= i;
      count++;
    }
    if (m == multiplication) printf("Count of odd numbers: %d\n", count);
    else printf("Impossible\n");
  }
}
