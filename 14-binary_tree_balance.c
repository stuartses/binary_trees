#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_balance - balance factor of a binary tree
 * @tree: input tree
 *
 * Description: Function that measures the balance factor of a binary tree
 * Return: number the balance factor
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	size_t hleft = 0, hright = 0;
	int bf = 0;

	if (tree == NULL)
		return (0);

	if (binary_tree_leaves(tree->left) == 1)
		hleft = 1;
	else
		hleft = binary_tree_height(tree->left);

	if (binary_tree_leaves(tree->right) == 1)
		hright = 1;
	else
		hright = binary_tree_height(tree->right);

	bf = hleft - hright;

	return (bf);
}
