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
