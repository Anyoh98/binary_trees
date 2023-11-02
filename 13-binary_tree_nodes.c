#include "binary_trees.h"

/**
 * binary_tree_nodes - Count the number of nodes in a binary tree with children
 * @tree: Pointer to the root of the tree to count nodes in
 *
 * Description: This function calculates the number of nodes in a binary tree
 * that have at least one child, using a recursive approach.
 *
 * Return: Number of nodes with children, or 0 if the tree is NULL.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t num_nodes = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		num_nodes += ((tree->left || tree->right) ? 1 : 0);
		num_nodes += binary_tree_nodes(tree->left);
		num_nodes += binary_tree_nodes(tree->right);
		return (num_nodes);
	}
}

