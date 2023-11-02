#include "binary_trees.h"
/**
 * binary_tree_is_perfect - Check if a tree is perfect.
 * A perfect tree has the same number of levels in the
 * left and right subtrees,
 * and each node has either 2 child nodes or none.
 * @tree: Tree to check for perfection.
 * Return: 0 if it's not perfect, or the level of
 * height as a positive integer.
 */
int the_tree_is_perfect(const binary_tree_t *tree)
{
	int l = 0, r = 0;

	if (tree->left && tree->right)
	{
		l = 1 + the_tree_is_perfect(tree->left);
		r = 1 + the_tree_is_perfect(tree->right);
		if (r == l && r != 0 && l != 0)
			return (r);
		return (0);
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
/**
 * binary_tree_is_perfect - unction that checks if a binary tree is perfect
 * @tree: pointer to tree
 * Return: 0 if tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int result = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		result = the_tree_is_perfect(tree);
		if (result != 0)
		{
			return (1);
		}
		return (0);
	}
}
