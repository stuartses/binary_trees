#include "binary_trees.h"
/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: input tree
 *
 * Description: Function that counts the leaves in a binary tree
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
		count += binary_tree_leaves(tree->left);

	if (tree->right)
		count += binary_tree_leaves(tree->right);

	if (!tree->left && !tree->right)
		count++;

	return (count);
}
