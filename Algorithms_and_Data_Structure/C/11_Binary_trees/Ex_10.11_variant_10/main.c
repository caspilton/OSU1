#define _CRT_SECURE_NO_WARNINGS
#include "binary_tree.h"
#include "support_functions.h"

#include <time.h>


int main() {
	srand((unsigned)time(0));

	unsigned tree_size;
	printf("Enter a tree size: ");
	scanf("%d", &tree_size);

	BinaryTree *tree = btree_create_randomly(tree_size);
	if (tree == NULL) {
		printf("Cannot allocate memory for binary tree");
	}

	printf("Tree:\n");
	btree_print(tree, 0);
	
	int minimum = btree_min(tree);
	printf("Minimum element: %d", minimum);

	btree_free(tree);
}
