#include "binary_trees.h"

/**
 * binary_tree_preorder - Pre-order traversal
 * @tree: input node tree
 * @func: Reference to a function with "n" as argument
 *
 * Description: Through a binary tree using pre-order traversal
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	func(tree->n);

	if (tree->left != NULL)
		binary_tree_preorder(tree->left, *func);

	if (tree->right != NULL)
		binary_tree_preorder(tree->right, *func);
}
