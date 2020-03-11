#include "binary_trees.h"

/**
 * binary_tree_postorder - Post-order traversal
 * @tree: input node tree
 * @func: Reference to a function with "n" as argument
 *
 * Description: Through a binary tree using Post-order traversal
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_postorder(tree->left, *func);

	if (tree->right != NULL)
		binary_tree_postorder(tree->right, *func);

	func(tree->n);

}
