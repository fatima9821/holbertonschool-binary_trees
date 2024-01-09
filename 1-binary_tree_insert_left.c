#include "binary_trees.h"
/**
 * binary_tree_insert_left - inserts a node as the left-child
 * @parent: is a pointer to parent node
 * @value: an integer that will be stored in the new node
 * Return: pointer to new left child node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_left_node = NULL;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_left_node = malloc(sizeof(binary_tree_t));
	if (new_left_node == NULL)
	{
		return (NULL);
	}
	new_left_node->n = value;
	new_left_node->parent = parent;
	new_left_node->left = NULL;
	new_left_node->right = NULL;

	if (parent->left != NULL)
	{
		new_left_node->left = parent->left;
		new_left_node->left->parent = new_left_node;
	}
	else
	{
		parent->left = new_left_node;
	}
	return (new_left_node);
}
