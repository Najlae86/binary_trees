#include "binary_trees.h"

/**
 * binary_tree_sibling - finds the node's sibling.
 * @node: the node to find the sibling
 * Return: NULL if the node/parent/sibling is NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
