#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node
 *
 * @parent: parent node
 * @value: value of node
 *
 * Description: Function that creates a binary tree node
 * Return: Pointer to new binary tree node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_tree;

	new_tree = malloc(sizeof(binary_tree_t));
	if (new_tree == NULL)
		return (NULL);

	new_tree->n = value;
	new_tree->parent = parent;

	return (new_tree);
}
