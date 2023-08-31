#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: the root node
 * Return: 0 if it's NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		int l = 0, r = 0;

		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		if (l > r)
			return (l);
		else
			return (r);
	}
	else
		return (0);
}
/**
 * binary_tree_size - measures the size of a binary tree.
 * @tree: the root node of the tree to measure the size
 * Return: 0 if it's NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	{
		size_t n_l, n_r;

		n_l = binary_tree_size(tree->left);
		n_r = binary_tree_size(tree->right);
		return (1 + n_l + n_r);
	}
}
/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: the root node
 * Return: 0 if it's NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t h = 0, p_size = 0;

	if (tree == NULL)
		return (0);
	h = binary_tree_height(tree);
	p_size = (1 << (h + 1)) - 1;
	if (p_size == binary_tree_size(tree))
		return (1);
	else
		return (0);
}
