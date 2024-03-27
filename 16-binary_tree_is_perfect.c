#include "binary_trees.h"

/**
 * findh - function to find the height of tree
 * @tree: pointer to the tree to be checked
 * Return: height of tree or NULL if no tree or 0
 */

int findh(const binary_tree_t *tree)
{
	int lefth, righth;

	if (!tree)
		return (0);
	lefth = tree->left ? 1 + findh(tree->left) : 0;
	righth = tree->right ? 1 + findh(tree->right) : 0;

	return (lefth > righth ? lefth : righth);
}

int nodec(const binary_tree_t *tree)
{
	int leftn, rightn;

	if (tree == NULL)
		return (0);
	leftn = nodec(tree->left);
	rightn = nodec(tree->right);

	return (leftn + rightn + 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 0 if tree is NULL or not perfect and 1 if perfect
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int nodes, h, check;

	if (!tree)
		return (0);

	nodes = nodec(tree);
	h = findh(tree);
	check = (1 << (h + 1)) - 1;

	return (check == nodes);
}
