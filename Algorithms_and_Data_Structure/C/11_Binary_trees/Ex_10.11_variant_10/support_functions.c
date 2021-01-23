#include "support_functions.h"

BinaryTree* btree_create_randomly(unsigned size)
{
	if (size == 0)
		return NULL;

	BinaryTree *tree = btree_create(rand() % 11 - 5);

	if (tree != NULL) {
		tree->left = btree_create_randomly(size - 1);
		tree->right = btree_create_randomly(size - 1);
	}

	return tree;
}

int btree_min(BinaryTree* tree)
{
	if (tree == NULL)
		return INT_MAX;

	int current_data = tree->data;
	int left_min = btree_min(tree->left);
	int right_min = btree_min(tree->right);
	return min(current_data, min(left_min, right_min));
}
