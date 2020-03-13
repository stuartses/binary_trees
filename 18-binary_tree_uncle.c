#include "binary_trees.h"
/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: node of tree
 * Description: Function that finds the uncle of a node
 * Return: uncle or NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{

	binary_tree_t *parent, *grandpa;

	if (!node)
		return (NULL);

	parent = node->parent;
	if (!parent)
		return (NULL);

	/* if doesn't have grandparent, doesn't have uncle */
	grandpa = parent->parent;
	if (!grandpa)
		return (NULL);

	if (grandpa->left != parent)
		return (grandpa->left);
	if (grandpa->right != parent)
		return (grandpa->right);

	return (NULL);
}
