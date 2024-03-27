#include "binary_trees.h"

/**
 * binary_tree_sibling - function that finds the sibling of a node
 * @node: pointer to the node to find the sibling
 * Return: pointer to the sibling node or NULL if node is NULL
 * or parent is NULL or Node has no sibling
 */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent || (!node->parent->left && !node->parent->right))
		return (NULL);
	if (node->parent->left->n == node->n)
		return (node->parent->right);
	return (node->parent->left);
}
