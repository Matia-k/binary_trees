#include "binary_trees.h"

/**
* binary_tree_size - measures the size of a binary tree.
* @tree: the tree whose size is to be measured.
* Return: the size of the tree.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree)
		return (0);
	l = binary_tree_size(tree->left);
	r = binary_tree_size(tree->right);
	return (l + r + 1);
}
