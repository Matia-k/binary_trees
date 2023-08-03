#include "binary_trees.h"

/**
* binary_tree_is_perfect - checks if a binary tree is perfect.
* @tree: tree to be checked.
* Return: 1 if perfect, 0 otherwise.
*/
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	if (tree->left != NULL && tree->right == NULL)
		return (0);

	if (tree->left == NULL && tree->right != NULL)
		return (0);

	if (binary_tree_balance(tree) != 0)
		return (0);

	if (tree->right != NULL &&
		binary_tree_is_perfect(tree->right) == 0)
		return (0);

	if (tree->left != NULL &&
		binary_tree_is_perfect(tree->left) == 0)
		return (0);

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

/**
* binary_tree_balance - measures the balance factor of a binary tree.
* @tree: the tree to measure.
* Return: the balance factor of tree.
*/
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) -
			binary_tree_height(tree->right));
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
