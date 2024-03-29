#include "binary_trees.h"
/**
 * binary_tree_uncle - a function that finds the uncle of a node
 * @node: a pointer to the node to find the uncle
 * Return: a pointer to the uncle node
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grand_parent;

	if (node == NULL || node->parent == NULL || node->parent->parent == NULL)
	{
		return (NULL);
	}
	grand_parent = node->parent->parent;

	if (node->parent == grand_parent->left && grand_parent->right != NULL)
	{
		return (grand_parent->right);
	}
	if (node->parent == grand_parent->right && grand_parent->left != NULL)
	{
		return (grand_parent->left);
	}
	return (NULL);
}
