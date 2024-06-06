#include "binary_trees.h"
#include <stdlib.h>
/**
 * binary_tree_is_root - Function that if a given node is a root
 * @node: A node pointer
 *
 * Return: Always return 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
