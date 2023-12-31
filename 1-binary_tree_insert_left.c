#include "binary_trees.h"

/**
 * binary_tree_insert_left - inserts a node as the left-child of another node
 *
 * @parent: Pointer to the node to insert the left-child
 * @value: Value to store in the new node
 * Return: Pointer to the created node, or NULL on failure
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->parent = parent;
	new->n = value;
	new->left = parent->left;
	new->right = NULL;

	if (parent->left != NULL)
		parent->left->parent = new;

	parent->left = new;

	return (new);
}
