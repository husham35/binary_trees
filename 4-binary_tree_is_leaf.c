#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if a node of a tree is a leaf
 * @node: the node to check
 *
 * Return: 1 if the node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (!node)
		return (0);

	if (!node->left && !node->right)
		return (1);
	else
		return (0);
}
