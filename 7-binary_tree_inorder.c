#include "binary_trees.h"

/**
 * binary_tree_inorder - In-order traversal
 * @tree: input node tree
 * @func: Reference to a function with "n" as argument
 *
 * Description: Through a binary tree using In-order traversal
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	if (tree->left != NULL)
		binary_tree_inorder(tree->left, *func);

	func(tree->n);

	if (tree->right != NULL)
		binary_tree_inorder(tree->right, *func);

}
