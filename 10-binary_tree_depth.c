#include "binary_trees.h"

/**
* binary_tree_depth - measures the depth of a node in a binary tree.
* @tree: Pointer to the node whose depth is to be measured.
* Return: The depth of the node.
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	if (!tree)
		return (0);
	while (tree->parent)
	{
		depth++;
		tree = tree->parent;
	}
	return (depth);
}
