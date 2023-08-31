#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree.
 * @tree: the root node of the tree to be measured
 * Return: 0 if it's NULL.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return ((l > r) ? l : r);
	}
	return (0);
}
/**
 * binary_tree_balance - measures the balance factor
 * @tree: the root node
 * Return: 0 if it's NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}
