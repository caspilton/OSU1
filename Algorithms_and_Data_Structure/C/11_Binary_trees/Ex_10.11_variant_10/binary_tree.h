#ifndef BINARY_TREE_H
#define BINARY_TREE_H

#include <stdlib.h>
#include <stdio.h>

typedef struct BinaryTree BinaryTree;
struct BinaryTree {
	int data;
	BinaryTree *left;
	BinaryTree *right;
};

BinaryTree *btree_create(int data);
void btree_free(BinaryTree *tree);

void btree_print(BinaryTree *tree, int level);

#endif
