#include "binary_trees.h"

/**
 * binary_height_bf - Binary tree height
 * @tree: input node tree
 *
 * Description: Function that measures the height of a binary tree
 * Return: height of tree
 */
size_t binary_height_bf(const binary_tree_t *tree)
{
	size_t count_left = 0;
	size_t count_right = 0;
	size_t height = 0;

	if (tree == NULL)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	if (tree->left != NULL)
	{
		count_left += binary_height_bf(tree->left);
		count_left++;
	}

	if (tree->right != NULL)
	{
		count_right += binary_height_bf(tree->right);
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

	hleft = binary_height_bf(tree->left);
	hright = binary_height_bf(tree->right);

	bf = hleft - hright;

	return (bf);
}
