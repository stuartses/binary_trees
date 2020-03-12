#include "binary_trees.h"

/**
 * binary_tree_height - Binary tree height
 * @tree: input node tree
 *
 * Description: Function that measures the height of a binary tree
 * Return: height of tree
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;
	size_t height = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
	{
		count_left += binary_tree_height(tree->left);
		count_left++;
	}

	if (tree->right != NULL)
	{
		count_right += binary_tree_height(tree->right);
		count_right++;
	}

	if (count_left > count_right)
		height = count_left;
	else if (count_right > count_left)
		height = count_right;
	else
		height = count_left;

	return (height);
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
 * _pow - calc power of x to n
 * @x: base number
 * @n: power number
 *
 * Description: function that returns a number power to n
 * Return: x power to n
 */
size_t _pow(size_t x, size_t n)
{
	size_t i;
	size_t number = 1;

	for (i = 0; i < n; ++i)
		number *= x;

	return (number);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: input tree
 *
 * Description: Function that checks if a binary tree is perfect
 * Return: number of nodes
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t leave, height, leave_calc;

	if (tree == NULL)
		return (0);

	leave = binary_tree_leaves(tree);
	height = binary_tree_height(tree);
	leave_calc = _pow(2, height);

	if (leave == leave_calc)
		return (1);
	else
		return (0);
}
