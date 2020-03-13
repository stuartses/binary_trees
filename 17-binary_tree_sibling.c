#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the sibling of a node
 * @node: input node tree
 *
 * Description: Function that finds the sibling of a node
 * Return: the Sibling or NULL if fails
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (!node)
		return (NULL);

	parent = node->parent;
	if (!parent)
		return (NULL);

	if (parent->left != node)
		return (parent->left);
	if (parent->right != node)
		return (parent->right);

	return (NULL);
}
