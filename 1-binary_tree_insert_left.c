#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: parent node
 * @value: value of node
 *
 * Description: Function that inserts a node as the left-child of another node
 * Return: new left node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *prev_node;

	/* Calls function binary_tree_node to creates the new tree node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	prev_node = parent->left;

	if (prev_node != NULL)
	{
		prev_node->parent = new_node;
		new_node->left = prev_node;
	}

	new_node->n = value;
	parent->left = new_node;

	return (new_node);
}
