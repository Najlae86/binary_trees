#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as the right-child of a node.
 * @parent: a poinet to the node inserted in the right-child
 * @value: the value to store in the new node
 * Return: a pointer to the created node, or NULL on failure/parent is NULL.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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
	if (parent->right != NULL)
	{
		node->right = parent->right;
		parent->right->parent = node;
	}
	parent->right = node;
	return (node);
}
