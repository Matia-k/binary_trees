#include "binary_trees.h"

/**
* binary_tree_postorder - traverses a binary tree using in-order traversal.
* @tree: the tree to traverse.
* @func: a pointer to a function to call for each node.
* The value in the node must be passed as a parameter to this function.
*/
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		func(tree->n);
		binary_tree_postorder(tree->right, func);
	}
}
