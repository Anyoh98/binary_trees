#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to the root node
 * Return: 0 if tree is NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t node_size = 0, left = 0, right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		left = binary_tree_size(tree->left);
		right = binary_tree_size(tree->right);
		node_size = right + left + 1;
	}
	return (node_size);
}
