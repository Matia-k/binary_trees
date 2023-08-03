#include "binary_trees.h"

/**
* binary_tree_leaves - counts the leaves in a binary tree.
* @tree: the tree whose leaves are to be counted.
* Return: the number of leaves in the tree.
*/
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	if (!tree->left && !tree->right)
		return (1);
	l = binary_tree_leaves(tree->left);
	r = binary_tree_leaves(tree->right);
	return (l + r);
}
