#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * @parent: pointer to parent
 * @value: value to store in the new node
 * Return: pointer to new right child node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_right_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_right_node = malloc(sizeof(binary_tree_t));
	if (new_right_node == NULL)
	{
		return (NULL);
	}
	new_right_node->n = value;
	new_right_node->parent = parent;
	new_right_node->left = NULL;

	if (parent->right != NULL)
	{
		new_right_node->right = parent->right;
		parent->right->parent = new_right_node;
	}
	else
	{
		new_right_node->right = NULL;
	}
	parent->right = new_right_node;

	return (new_right_node);
}
