#include "binary_trees.h"

/**
 * binary_tree_inorder - A binary tree using in-order traversal
 *
 * @tree: A pointer to the root node of the tree to traverse
 * @func: A function to call for each node
 * Return: no return if tree or func is NULL
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
