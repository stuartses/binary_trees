#include "binary_trees.h"
/**
 * binary_tree_nodes - Counts the nodes with at least 1 child
 * @tree: input tree
 *
 * Description: Function that counts the nodes with at least 1 child
 *              In a binary tree
 * Return: number of nodes
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t count = 0, flag = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		count += binary_tree_nodes(tree->left);
		count++;
		flag = 1;
	}

	if (tree->right)
	{
		count += binary_tree_nodes(tree->right);
		if (flag == 0)
			count++;
	}

	return (count);
}
