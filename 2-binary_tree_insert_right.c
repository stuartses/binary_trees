#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child
 * @parent: parent node
 * @value: value of new node
 *
 * Description: Function that inserts a node as the right-child of another node
 * Return: New right node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node, *prev_node;

	if (parent == NULL)
		return (NULL);

	/* Calls function binary_tree_node to creates the new tree node */
	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	prev_node = parent->right;

	if (prev_node != NULL)
	{
		prev_node->parent = new_node;
		new_node->right = prev_node;
	}

	new_node->n = value;
	parent->right = new_node;

	return (new_node);
}
