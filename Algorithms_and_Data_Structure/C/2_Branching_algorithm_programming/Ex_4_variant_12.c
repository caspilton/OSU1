#include <stdio.h>

int main() {
  int n;
  printf("Input number of month: ");
  scanf("%d", &n);
  while ((n < 1) || (n > 12)) {
    printf("Incorrect input! Please,input integer number n = [1; 12]");
    scanf("%d", &n);
  }
  switch(n) {
    case 1: 
      printf("The 1st of January - New Year\n7th of January - Nativity\n");
      break;
    case 2:
      printf("The 23rd of February- Defender of the Fatherland Day\n");
      break;
    case 3:
      printf("The 8th of March - International Women's Day\n");
      break;
    case 4:
      printf("There are no holidays in April\n");
      break;
    case 5:
      printf("The 1st of May - Spring and Labor Day\nThe 9th of May - Victory Day\n");
      break;
    case 6:
       printf("The 12th of June - Day of Russia\n");
      break;
    case 7:
      printf("There are no holidays in July\n");
      break;
    case 8:
      printf("There are no holidays in August\n");
      break;
    case 9:
      printf("There are no holidays in September\n");
      break;
    case 10:
      printf("There are no holidays in October\n");
      break;
    case 11:
      printf("The 4th of November - National Unity Day\n");
      break;
    case 12:
      printf("There are no holidays in December\n");
      break;
  }
}
