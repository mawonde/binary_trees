#include "binary_trees.h"

/**
 * binary_tree_is_full - function that checks if a binary tree is full
 *
 * @tree: tree is a pointer to the root node of the tree to check
 * Return: 0 if tree is not full or 1 if it is
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int s1 = 0;
	int s2 = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	s1 = binary_tree_is_full(tree->left);
	s2 = binary_tree_is_full(tree->right);

	if (s1 && s2)
		return (1);

	return (0);
}
