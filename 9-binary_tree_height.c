#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:pointer to the root node of the tree to measure the height
 * Return: height of the tree if tree is null return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth, righth;

	if (!tree)
		return (0);

	lefth = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	righth = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (lefth > righth ? lefth : righth);
}
