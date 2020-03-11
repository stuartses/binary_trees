#include "binary_trees.h"

/**
 * binary_tree_depth - Binary tree height
 * @tree: input node tree
 *
 * Description: Function that measures the height of a binary tree
 * Return: height of tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;
	int flag = 0;

	if (tree == NULL)
		return (0);

	if (tree->left)
	{
		depth += binary_tree_depth(tree->left);
		depth++;
		flag = 1;
	}

	if (tree->right)
	{
		depth += binary_tree_depth(tree->right);
		if (flag == 0)
			depth++;
	}


	return (depth);
}
