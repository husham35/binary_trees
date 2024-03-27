#include "binary_trees.h"

/**
 * helper_bst - a helper function for binary_tree_is_bst
 * @node: node to check
 * @min: min value allowed in the subtree root node
 * @max: max value allowed in the subtree root node
 *
 * Return: 1 if node is part of a valid binary search tree
 */
int helper_bst(const binary_tree_t *node, int min, int max)
{
	if (node == NULL)
		return (1);

	if (node->n <= min || node->n >= max)
		return (0);

	return (helper_bst(node->left, min, node->n) &&
			helper_bst(node->right, node->n, max));
}

/**
 * binary_tree_is_bst - checks if a binary tree is a valid Binary Search Tree
 * @tree: is a pointer to the root node of the tree to check
 *
 * Return: 1 if tree is a valid BST, otherwise 0
 */
int binary_tree_is_bst(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (helper_bst(tree, INT_MIN, INT_MAX));
}
