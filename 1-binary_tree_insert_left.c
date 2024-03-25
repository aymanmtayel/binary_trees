#include "binary_trees.h"

/**
 * binary_tree_insert_left - function that inserts a node as the left child
 * @parent: pointer to the node to insert a left child in
 * @value: the value to stor to the left child
 * Return: pointer to the node or NULL if failed
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (parent == NULL || node == NULL)
		return (NULL);
	node->n = value;
	node->left = NULL;
	node->right = NULL;
	node->parent = parent;
	if (parent->left)
	{
		node->left = parent->left;
		parent->left->parent = node;
	}
	else
		node->left = NULL;

	parent->left = node;
	node->right = NULL;
	return (node);
}
