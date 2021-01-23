#define _CRT_SECURE_NO_WARNINGS
#include "list.h"
#include "support_functions.h"

#include <time.h>

int main() {
	srand((unsigned)time(0));

	unsigned int first_list_size;
	printf("Enter a first list size: ");
	scanf("%d", &first_list_size);

	unsigned int second_list_size;
	printf("Enter a second list size: ");
	scanf("%d", &second_list_size);

	List* first = list_create_randomly(first_list_size);
	if (first == NULL) {
		printf("Cannot allocate memory for first list\n");
		exit(1);
	}

	List* second = list_create_randomly(second_list_size);
	if (first == NULL) {
		printf("Cannot allocate memory for second list\n");
		exit(1);
	}

	printf("First list:  ");
	list_print(first);
	printf("\n");

	printf("Second list: ");
	list_print(second);
	printf("\n");

	List* third = lists_merge_unique(first, second);
	if (first == NULL) {
		printf("Cannot allocate memory for third list\n");
		exit(1);
	}

	printf("Merged list: ");
	list_print(third);
	printf("\n");

	list_free(first);
	list_free(second);
	list_free(third);
}
