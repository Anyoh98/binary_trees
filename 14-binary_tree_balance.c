#include "binary_trees.h"

/**
 * binary_tree_height_b - Measures height of a binary tree for a bal tree
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height_balanced(const binary_tree_t *tree)
{
	size_t left = 0;
	size_t right = 0;

	if (tree == NULL)
		return (0);
	if (tree)
	{
		left = tree->left ? 1 + binary_tree_height_b(tree->left) : 1;
		left = tree->right ? 1 + binary_tree_height_b(tree->right) : 1;
	}
	return ((left > right) ? left : right);
}

/**
 * binary_tree_balance - Measures balance factor of a binary tree
 * @tree: tree to go through
 * Return: balanced factor
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int total = 0, left_node = 0, right_node = 0;

	if (tree)
	{
		left_node = ((int)binary_tree_height_balanced(tree->left));
		right_node = ((int)binary_tree_height_balanced(tree->right));
		total = left_node - right_node;
	}
	return (total);
}
