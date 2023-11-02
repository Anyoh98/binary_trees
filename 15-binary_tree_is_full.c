#include "binary_trees.h"
/**
 * binary_tree_is_full -  function that checks if a binary tree is full
 * @tree: pointer to the tree node
 * Return: 0 if NULL.
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_result = 0, right_result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree->left && tree->right)
		{
			left_result = binary_tree_is_full(tree->left);
			right_result = binary_tree_is_full(tree->right);
			if (left_result == 0 || right_result == 0)
			{
				return (0);
			}
			return (1);
		}
		else if (!tree->left && !tree->right)
		{
			return (1);
		}
		else
		{
			return (0);
		}
	}
}
