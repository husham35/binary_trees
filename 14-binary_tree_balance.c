#include "binary_trees.h"

/**
 * max_int - returns the maximum of two integers
 * @first: the first integer
 * @second: the second integer
 *
 * Return: the maximum between the two integer
 */
size_t max_int(size_t first, size_t second)
{
	if (first > second)
		return (first);
	else
		return (second);
}
/**
 * bin_tree_height - measures the height of a binary tree
 * @tree: a pointer to the root node of the tree
 *
 * Return: the eight of the tree, otherwise 0
 */
size_t bin_tree_height(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left || tree->right)
		return (max_int(bin_tree_height(tree->left),
						bin_tree_height(tree->right)) +
				1);
	return (0);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: a pointer to the root node of the tree to measure the balance factor
 *
 * Return: the balance factor, otherwise 0
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height, r_height;

	if (!tree)
		return (0);

	if (tree->left)
		l_height = (bin_tree_height(tree->left));
	else
		l_height = (-1);

	if (tree->right)
		r_height = (bin_tree_height(tree->right));
	else
		r_height = (-1);

	return (l_height - r_height);
}
