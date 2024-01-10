#include "binary_trees.h"

/**
 * binary_tree_sibling - Find the sibling of a node
 * @node: A pointer to the node to find the sibling
 * Return: A pointer to the sibling node or NULL if none
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	binary_tree_t *parent = node->parent;

	if (node == NULL || node->parent == NULL)
	{
		return (NULL);
	}
	if (parent->left == node)
	{
		if (parent->right != NULL)
		{
			return (parent->right);
		}
	}
	else if (parent->right == node)
	{
		if (parent->left != NULL)
		{
			return (parent->left);
		}
	}
	return (NULL);
}
