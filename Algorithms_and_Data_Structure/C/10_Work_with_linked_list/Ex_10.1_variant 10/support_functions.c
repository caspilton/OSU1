#include "support_functions.h"

List* list_create_randomly(unsigned int size)
{
	List* list = list_create();
	if (list != NULL)
		for (unsigned int i = 0; i < size; i++)
			list_push_back(list, rand() % 11 - 5);
	return list;
}

List *lists_merge_unique(List *a, List *b)
{
	List *list = list_create();
	
	if (list != NULL) {
		ListNode *current = a->root;
		while (current != NULL) {
			if (!list_contains(list, current->data))
				list_push_back(list, current->data);
			current = current->next;
		}

		current = b->root;
		while (current != NULL) {
			if (!list_contains(list, current->data))
				list_push_back(list, current->data);
			current = current->next;
		}

		return list;
	}

	return list;
}
