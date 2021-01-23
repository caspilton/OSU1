#ifndef LIST_H
#define LIST_H

#include <stdlib.h>
#include <stdbool.h>
#include <stdio.h>

typedef struct ListNode ListNode;
struct ListNode {
	int data;
	ListNode *next;
};

typedef struct List List;
struct List {
	ListNode *root;
	ListNode *tail;
	unsigned int size;
};

ListNode *listnode_create(int data);
List *list_create();
void listnode_free(ListNode *node);
void list_free(List *list);

bool list_push_back(List *list, int data);
bool list_contains(List *list, int data);

void list_print(List *list);

#endif
