#include "binary_trees.h"

/**
* binary_tree_is_full - checks if a binary tree is full.
* @tree: the tree to check.
* Return: 1 if full, 0 otherwise.
*/
int binary_tree_is_full(const binary_tree_t *tree)
{
	int l, r;

	if (!tree)
		return (0);
	if (binary_tree_is_leaf(tree) == 0)
	{
		if (!tree->left || !tree->left)
		{
			return (0);
			exit(0);
		}
		else
		{
			l = binary_tree_is_full(tree->left);
			r = binary_tree_is_full(tree->right);
			if (l == 1 && r == 1)
				return (1);
			return (0);
		}
	}
	return (1);
}

/**
* binary_tree_is_leaf - checks if node is a leaf.
* @node: node to be checked.
* Return: 1 if node is a leaf, otherwise 0
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (!node->left && !node->right)
		return (1);
	return (0);
}
