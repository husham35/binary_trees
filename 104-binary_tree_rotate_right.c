#include "binary_trees.h"

/**
 * binary_tree_rotate_right - performs a right-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 *
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *auxilliary, *tmp;

	if (tree == NULL)
		return (NULL);

	if (tree->left)
	{
		tmp = tree->left->right;
		auxilliary = tree->left;
		auxilliary->parent = tree->parent;
		auxilliary->right = tree;
		tree->parent = auxilliary;
		tree->left = tmp;
		if (tmp)
			tmp->parent = tree;

		return (auxilliary);
	}

	return (NULL);
}
