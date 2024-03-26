#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: a pointer to the root node of the tree to count the number of nodes
 *
 * Return: the number of node with child, otherwise 0
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->right || tree->left)
		return (binary_tree_nodes(tree->left) +
				binary_tree_nodes(tree->right) + 1);
	return (0);
}
