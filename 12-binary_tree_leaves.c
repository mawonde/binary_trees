#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves of binary_tree
 *
 * @tree: a pointer that points to the node root
 *
 * Return: the number of leaves in the tree, or 0 if tree is NULL
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	if (tree)
	{
		if (!tree->left && !tree->right)
			return (1);
		else
			return (binary_tree_leaves(tree->left)
					+ binary_tree_leaves(tree->right));
	}

	return (0);
}
