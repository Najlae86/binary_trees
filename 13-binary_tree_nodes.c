#include "binary_trees.h"

/**
 * binary_tree_nodes - counts the nodes with atleast 1 child in a binary tree.
 * @tree: the root node of the tree to be counted
 * Return 0 if it's NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	if (tree->right != NULL || tree->left != NULL)
		return (1 + binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left));
	return (0);
}
