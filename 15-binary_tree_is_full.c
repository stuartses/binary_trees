#include "binary_trees.h"

/**
 * binary_tree_size - Size of a binary tree
 * @tree: input node tree
 *
 * Description: Function that measures the size of a binary tree
 * Return: size of tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		size += binary_tree_size(tree->left);

	if (tree->right)
		size += binary_tree_size(tree->right);

	return (size);
}


/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: input tree
 *
 * Description: Function that checks if a binary tree is full
 * Return: number of nodes
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t lsize = 0, rsize = 0, compare = 1;

	if (tree == NULL)
		return (0);

	if (tree->left)
		lsize = binary_tree_size(tree->left);
	if (tree->right)
		rsize = binary_tree_size(tree->right);

	compare = lsize + rsize;
	if (compare % 2 == 0)
		return (1);
	else
		return (0);
}
