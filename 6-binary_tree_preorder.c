#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_preorder - Function that goes through a Btree
 * @tree: Pointer to the tree node
 * @func: Pointer the function
 * Return: Always return
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
