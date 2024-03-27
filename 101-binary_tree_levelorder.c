#include "binary_trees.h"
/**
 * bt_height - calculates the height of a binary tree.
 *@tree: pointer to the root node of the tree to calculate the height.
 * Return: if tree is NULL, your function must return 0.
 */
size_t bt_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int left = 0, right = 0;

		if (tree->right)
			right = 1 + bt_height(tree->right);
		if (tree->left)
			left = 1 + bt_height(tree->left);
		if (left > right)
			return (left);
		else
			return (right);
	}
	else
		return (0);
}
/**
 * prin_at_lvl - print node, especific level
 * @tree: pointer to the root node of the tree to traverse
 * @func: pointer to a function to call for each node.
 * @level: level to print
 */
void prin_at_lvl(const binary_tree_t *tree, void (*func)(int), int level)
{
	if (tree && func)
	{
		if (level == 1)
			func(tree->n);
		else
		{
			prin_at_lvl(tree->left, func, level - 1);
			prin_at_lvl(tree->right, func, level - 1);
		}
	}
}

/**
 * binary_tree_levelorder - goes through a binary tree
 *	using level-order traversal
 * @tree: a pointer to the root node of the tree to traverse
 * @func: a pointer to a function to call for each node
 */
void binary_tree_levelorder(const binary_tree_t *tree, void (*func)(int))
{
	size_t height = 0, idx = 1;

	if (tree && func)
	{
		height = bt_height(tree);

		while (idx <= height + 1)
		{
			prin_at_lvl(tree, func, idx);
			idx++;
		}
	}
}
