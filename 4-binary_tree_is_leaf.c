#include "binary_trees.h"

/**
 * binary_tree_is_leaf -  checks if a node is a leaf
 * @node: input node
 *
 * Description: Function that checks if a node is a leaf
 * Return: 1 if is a leaf, 0 if is not
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);

	if (node->right == NULL && node->left == NULL)
		return (1);
	else
		return (0);
}
