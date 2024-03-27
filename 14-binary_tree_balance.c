#include "binary_trees.h"
#include <stdio.h>
/**
 * binary_tree_h - function that measures the height
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree or 0 if NULL tree
 */
int binary_tree_h(const binary_tree_t *tree)
{
	int lefth, righth;

	if (!tree)
		return (0);

	lefth = binary_tree_h(tree->left);
	righth = binary_tree_h(tree->right);
	return ((lefth > righth ? lefth : righth) + 1);
}

/**
 * binary_tree_balance - function that measures the height
 * of a binary tree
 * @tree: pointer to the root node of the tree to measure the height
 * Return: the height of the tree or 0 if NULL tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int leftb, rightb;

	if (!tree)
		return (0);
	leftb = binary_tree_h(tree->left);
	rightb = binary_tree_h(tree->right);

	return (leftb - rightb);
}
