#include "binary_trees.h"

/**
 * binary_tree_depth - Measures the depth of a node in a binary tree.
 * @tree: Pointer to the node whose depth is being measured.
 * Return: Depth if the node, or 0 if tree is NULL.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t depth = 0;

		while (tree->parent)
		{
			depth++;
			tree = tree->parent;
		}

		return (depth);
	}

	return (0);
}
