#include "binary_trees.h"
/**
 * binary_tree_nodes - counts the nodes with at least 1 child in a binary tree
 * @tree: pointer to the root node of the tree to count the number of nodes
 * Return: count of 1 child nodes or 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_c, right_c;

	if (!tree)
		return (0);

	left_c = binary_tree_nodes(tree->left);
	right_c = binary_tree_nodes(tree->right);
	return ((tree->left || tree->right) + left_c + right_c);
}
