#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Function to check if node is a leaf
 * @node: The node pointer
 *
 * Return: If the node is a leaf 0 else return 1
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || node->left != NULL || node->right != NULL)
		return (0);

	return (1);
}
