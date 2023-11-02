#include "binary_trees.h"

/**
 * binary_tree_node - Function that creates a new binary node
 * @parent: parent of the created node
 * @value: Value of the created node
 * Return: The new node
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_Node;

	new_Node = malloc(sizeof(binary_tree_t));
	if (new_Node == NULL)
		return (NULL);
	new_Node->n = value;
	new_Node->parent = parent;
	new_Node->left = NULL;
	new_Node->right = NULL;
	return (new_Node);
}
