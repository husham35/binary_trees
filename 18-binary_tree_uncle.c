#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: a pointer to a node
 *
 * Return: NULL if node is NULL of  has no uncle, otherwise uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *uncle_node;

	if (!node)
		return (NULL);
	uncle_node = node->parent->parent;
	if (node->parent && uncle_node && uncle_node->left == node->parent)
		return (uncle_node->right);
	else if (node->parent && uncle_node && uncle_node->right == node->parent)
		return (uncle_node->left);
	return (NULL);
}
