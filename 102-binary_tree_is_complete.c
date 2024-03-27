#include "binary_trees.h"

/**
 * bt_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 * @index: a node index to check
 * @size: the number of nodes in the tree
 *
 * Return: 1 if the tree is complete,
 *	0 if the tree is not complete or tree is NULL
 */
int bt_complete(const binary_tree_t *tree, size_t index, size_t size)
{
	if (!tree)
		return (1);

	if (index >= size)
		return (0);

	return (bt_complete(tree->left, 2 * index + 1, size) &&
			bt_complete(tree->right, 2 * index + 2, size));
}

/**
 * bt_size - claculates the size of a binary tree
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: the size of the tree, 0 if tree is NULL
 */
size_t bt_size(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (bt_size(tree->left) +
			bt_size(tree->right) + 1);
}

/**
 * binary_tree_is_complete - checks if a binary tree is complete
 * @tree: a pointer to the root node of the tree to check
 *
 * Return: 0 if the tree is not complete or tree is NULL
 */
int binary_tree_is_complete(const binary_tree_t *tree)
{
	size_t size;

	if (!tree)
		return (0);
	size = bt_size(tree);

	return (bt_complete(tree, 0, size));
}
