#include "binary_tree.h"

BinaryTree *btree_create(int data)
{
	BinaryTree *node = (BinaryTree *)calloc(1, sizeof(BinaryTree));

	if (node != NULL) {
		node->data = data;
		node->left = NULL;
		node->right = NULL;
	}

	return node;
}

void btree_free(BinaryTree *tree)
{
	if (tree == NULL)
		return;

	btree_free(tree->left);
	btree_free(tree->right);

	free(tree);
}

void btree_print(BinaryTree* tree, int level) 
{
	if (tree != NULL) {
		btree_print(tree->right, level + 1);
		for (size_t i = 0; i < level; i++)
			putchar('\t');
		printf("%2d\n", tree->data);
		btree_print(tree->left, level + 1);
	}
}
