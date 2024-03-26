#include "binary_trees.h"

/**
 * binary_tree_node - creates a binary tree node and initializes it.
 * @parent: binary tree node's parent
 * @value: binary tree node's value
 *
 * Return: pointer to the created binary tree node or NULL on failure
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	new_node->parent = parent;
	new_node->left = NULL;
	new_node->right = NULL;
	new_node->n = value;

	return (new_node);
}
