#include "binary_trees.h"

/**
 * binary_tree_leaves - function that counts the leaves in a binary tree
 * @tree: pointer to the root node of the tree to count the number of leaves
 * Return: count of the leaves in the tree or 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_L, left_L;

	if (!tree)
		return (0);
	if (!tree->right && !tree->left)
		return (1);
	right_L = binary_tree_leaves(tree->right);
	left_L = binary_tree_leaves(tree->left);
	return (right_L + left_L);
}
