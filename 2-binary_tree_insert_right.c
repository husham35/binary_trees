#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right child of another node
 * @parent: pointer to the node to insert the right-child in
 * @value: value to store in the new node
 *
 * Return: a pointer to the created node,
 *	or NULL on failure or if parent is NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_child = NULL;
	binary_tree_t *prev_right_child = NULL;

	if (parent == NULL)
		return (NULL);

	new_right_child = binary_tree_node(parent, value);
	if (new_right_child == NULL)
		return (NULL);

	if (parent->right != NULL)
		prev_right_child = parent->right;

	parent->right = new_right_child;
	if (prev_right_child)
	{
		new_right_child->right = prev_right_child;
		prev_right_child->parent = new_right_child;
	}

	return (new_right_child);
}
