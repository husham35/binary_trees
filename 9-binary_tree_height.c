#include "binary_trees.h"

/**
 * max_int - returns the maximum of two integers
 * @first: the first integer
 * @second: the second integer
 *
 * Return: the maximum between two integer
 */
size_t max_int(size_t first, size_t second)
{
	if (first > second)
		return (first);
	else
		return (second);
}

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree to measure the height
 *
 * Return: the height of the tree if not NULL, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (max_int(binary_tree_height(tree->left),
						binary_tree_height(tree->right)) +
				1);
	return (0);
}
