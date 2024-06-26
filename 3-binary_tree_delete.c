#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_delete - Function to delete BTREE
 * @tree: Pointer to the root of the tree
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
