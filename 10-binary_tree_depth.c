#include "binary_trees.h"
/**
 * binary_tree_depth - Function tha measures the depth pf a node
 * @tree: node to check the depth
 * Return: return 0 if root or depth number otherwise
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
