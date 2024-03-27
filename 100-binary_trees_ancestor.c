#include "binary_trees.h"

/**
 * bt_depth - measures the depth of a node in a binary tree
 *@tree: a pointer to the node to measure depth
 * Return: if tree is NULL, function must return 0
 */
size_t bt_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + bt_depth(tree->parent));
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor of two nodes
 * @first: a pointer to the first node
 * @second: a pointer to the second node
 * Return: NULL if no common ancestor was found,
 *	else a pointer to the lowest common ancestor node of the two given nodes
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
									 const binary_tree_t *second)
{
	size_t first_node_height = 0, second_node_height = 0;
	const binary_tree_t *auxilliary_node = NULL;

	first_node_height = bt_depth(first);
	second_node_height = bt_depth(second);

	if (first_node_height && second_node_height)
	{
		if (first_node_height > second_node_height)
		{
			auxilliary_node = first;
			first = second;
			second = auxilliary_node;
		}

		while (first)
		{
			auxilliary_node = second;

			while (auxilliary_node)
			{
				if (first == auxilliary_node)
					return ((binary_tree_t *)first);
				auxilliary_node = auxilliary_node->parent;
			}
			first = first->parent;
		}
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
