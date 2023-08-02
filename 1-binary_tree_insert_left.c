#include "binary_trees.h"

/**
* binary_tree_insert_left - inserts a node as the left-child of another node.
* @parent: pointer to the node to insert the left-child in.
* @value: value to be held in the new node.
* Return: Pointer to the new node, or NULL on failure.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL || parent == NULL)
		return (NULL);
	new->parent = parent;
	new->n = value;
	new->right = NULL;

	if (parent->left)
	{
		temp = parent->left;
		new->left = temp;
		temp->parent = new;
	}
	else
		new->left = NULL;
	parent->left = new;

	return (new);
}
