#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of the node
 * @tree: the node to be measured.
 * Return: 0, if it's NULL
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + binary_tree_depth(tree->parent));
}
/**
 * binary_trees_ancestor - finds the lowest common ancestor of 2 nodes.
 * @first: the first node.
 * @second: the second node.
 * Return: a pointer to the lowest common ancestor node
 * 	if no ancestor was found return NULL.
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	size_t h_f = 0, h_s = 0;
	const binary_tree_t *o = NULL;

	h_f = binary_tree_depth(first);
	h_s = binary_tree_depth(second);
	if (h_f && h_s)
	{
		if (h_f > h_s)
		{
			o = first;
			first = second;
			second = o;
		}
		while (first)
		{
			o = second;
			while (o)
			{
				if (first == o)
					return ((binary_tree_t *)first);
				o = o->parent;
			}
			first = first->parent;
		}
	}
	else
	{
		return (NULL);
	}
	return (NULL);
}
