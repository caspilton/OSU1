#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() 
{
	char buffer[80];
	printf("Enter a string (max length is 80): ");
	fgets(buffer, sizeof(buffer), stdin);

	int length = strlen(buffer);
	char *start = strrchr(buffer, ' ') + 1;
	printf("Last word length is %d", length - (int)(start-buffer) - 1);
}
