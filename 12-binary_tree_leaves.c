#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in binary tree
 * @tree: a pointer to the root node of the tree to count the number of leaves
 *
 * Return: the number of leaves in a tree, otherwise 0
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (!tree)
		return (0);
	if (tree->left && tree->right)
		return (binary_tree_leaves(tree->left) +
				binary_tree_leaves(tree->right));
	return (1);
}
