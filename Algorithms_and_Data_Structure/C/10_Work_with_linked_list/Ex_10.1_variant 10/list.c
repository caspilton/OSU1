#include "list.h"

ListNode* listnode_create(int data) {
	ListNode* node = (ListNode*)calloc(1, sizeof(ListNode));

	if (node == NULL)
		return NULL;

	node->data = data;
	node->next = NULL;

	return node;
}

List* list_create() {
	List* list = (List*)calloc(1, sizeof(List));

	if (list == NULL)
		return NULL;

	list->size = 0;
	list->root = NULL;
	list->tail = NULL;
	return list;
}

bool list_push_back(List* list, int data) {
	ListNode* node = listnode_create(data);
	if (node == NULL)
		return false;

	if (list->size == 0) {
		list->root = node;
		list->tail = node;
	}
	else {
		ListNode* temp = list->tail;
		list->tail->next = node;
		list->tail = node;
	}

	list->size++;
	return true;
}

bool list_contains(List* list, int data)
{
	ListNode *current = list->root;
	while (current != NULL) {
		if (current->data == data)
			return true;
		current = current->next;
	}
	return false;
}

void list_free(List *list)
{
	if (list) {
		listnode_free(list->root);
		free(list);
	}
}

void listnode_free(ListNode* node)
{
	ListNode *temp;
	while (node != NULL)
	{
		temp = node;
		node = node->next;
		free(temp);
	}
}

void list_print(List* list)
{
	ListNode *current = list->root;
	while (current != NULL) {
		printf("%3d", current->data);
		current = current->next;
	}
}
