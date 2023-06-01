#include "binary_trees.h"

/**
 * binary_tree_inorder - Goes through
 * @tree: A pointer to th
 * @func: A pointer to a function
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
