#include "binary_trees.h"

/**
 * binary_tree_height - function that measures the height of a binary tree
 * @tree:pointer to the root node of the tree to measure the height
 * Return: height of the tree if tree is null return 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t lefth = 0;
	size_t righth = 0;
	
	binary_tree_t *currl, *currr;

	if (!tree)
		return (0);
	
	currl = tree->left;
	currr = tree->right;

	while (currl || currr)
	{
		if (currl)
		{
			lefth++;
			currl = currl->left;
		}
		if (currr)
		{
			righth++;
			currr = currr->right;
		}
	}
	if (lefth > righth)
		return lefth;
	return righth;
}
