#include "binary_trees.h"

/**
 * binary_tree_delete - recursive function that deletes an entire binary tree
 * if tree is NULL do nothing
 * @tree: pointer to the root node of the tree to delete
 * Return: Void
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree)
	{
		binary_tree_delete(tree->left);
		binary_tree_delete(tree->right);
		free(tree);
	}
}
