#include "binary_trees.h"

/**
* binary_tree_balance - measures the balance factor of a binary tree.
* @tree: the tree to measure.
* Return: the balance factor of tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) -
				binary_tree_height(tree->right));
	return (0);
}

/**
* binary_tree_height - measures the height of a binary tree.
* @tree: the tree whose height is to be measured.
* Return: the height of the tree.
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height, r_height;

	if (tree == NULL)
		return (0);
	if (!tree->left && !tree->right)
		return (0);
	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (r_height > l_height)
		return (r_height + 1);
	return (l_height + 1);
}
