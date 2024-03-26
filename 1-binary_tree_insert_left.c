#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a new node
 *	as the left child of another node in a tree
 * @parent: pointer to the node to insert the left-child in
 * @value: the value to store in the new node
 *
 * Return: a pointer to the created node,
 *	or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_child = NULL;
	binary_tree_t *prev_left_child = NULL;

	if (parent == NULL)
		return (NULL);

	new_left_child = binary_tree_node(parent, value);
	if (new_left_child == NULL)
		return (NULL);

	if (parent->left != NULL)
		prev_left_child = parent->left;

	parent->left = new_left_child;
	if (prev_left_child)
	{
		new_left_child->left = prev_left_child;
		prev_left_child->parent = new_left_child;
	}

	return (new_left_child);
}
