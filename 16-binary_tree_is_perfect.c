#include "binary_trees.h"

/**
 * binary_tree_height - calculates the height of a binary tree
 * @tree: a pointer to the root node of the tree to calculate the height.
 *
 * Return: the height of the tree.
 *	If 'tree' is NULL, returns 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->left)
			left = 1 + binary_tree_height(tree->left);

		if (tree->right)
			right = 1 + binary_tree_height(tree->right);

		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}

/**
 * binary_tree_size - calculates the size of a binary tree
 * @tree: a pointer to the root node of the tree to calculated
 *
 * Return: NULL if tree is NULL, otherwise size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t num_left, num_right;

	if (tree == NULL)
		return (0);

	num_left = binary_tree_size(tree->left);
	num_right = binary_tree_size(tree->right);

	return (1 + num_left + num_right);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 1 if the binary tree is perfect, otherwise 0.
 *	If 'tree' is NULL, returns 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t height = 0, perfect_size = 0;

	if (tree == NULL)
		return (0);

	height = binary_tree_height(tree);
	perfect_size = (1 << (height + 1)) - 1;

	if (perfect_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
