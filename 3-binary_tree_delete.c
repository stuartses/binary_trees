#include "binary_trees.h"
/**
 * binary_tree_delete - Deletes an entire binary tree
 * @tree: binary tree
 *
 * Description: Function that deletes an entire binary tree
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree->left != NULL)
	{
		binary_tree_delete(tree->left);
		free(tree->left);
	}

	if (tree->right != NULL)
	{
		binary_tree_delete(tree->right);
		free(tree->right);
	}

	/** Free Top of tree */
	if (tree->parent == NULL)
		free(tree);
}
