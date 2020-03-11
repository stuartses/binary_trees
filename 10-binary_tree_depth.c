#include "binary_trees.h"

/**
 * binary_tree_depth - Depth of a node in a binary tree
 * @tree: input node tree
 *
 * Description: function that measures the depth of a node in a binary tree
 * Return: depth of a node
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (tree == NULL)
		return (0);

	if (!tree->parent)
		return (0);

	depth += binary_tree_depth(tree->parent);
	depth++;

	return (depth);
}
