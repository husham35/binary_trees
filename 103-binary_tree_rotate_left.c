#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: a pointer to the root node of the tree to rotate
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *auxilliary, *tmp;

	if (tree == NULL)
		return (NULL);

	if (tree->right)
	{
		tmp = tree->right->left;
		auxilliary = tree->right;
		auxilliary->parent = tree->parent;
		auxilliary->left = tree;
		tree->parent = auxilliary;
		tree->right = tmp;
		if (tmp)
			tmp->parent = tree;

		return (auxilliary);
	}

	return (NULL);
}
