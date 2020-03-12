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

/**
 * binary_tree_is_full - checks if a binary tree is full
 * @tree: input tree
 *
 * Description: Function that checks if a binary tree is full
 * Return: number of nodes
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	size_t leave, node, node_calc;

	if (tree == NULL)
		return (0);

	leave = binary_tree_leaves(tree);
	node = binary_tree_size(tree);
	node_calc = (2 * leave) - 1;

	if (node == node_calc)
		return (1);
	else
		return (0);
}
