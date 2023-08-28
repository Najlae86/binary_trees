#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node to the left child.
 * @parent: the node to insert the left child in.
 * @value: the value to store in the node.
 * Return: pointer to the created node, or NULL on failure/parent in NULL.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = NULL;

	if (parent == NULL)
		return (NULL);
	node = malloc(sizeof(binary_tree_t));
	if (node == NULL)
		return (NULL);
	node->n = value;
	node->parent = parent;
	node->left = NULL;
	node->right = NULL;
	if (parent->left == NULL)
		parent->left = node;
	else
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	return (node);
}
