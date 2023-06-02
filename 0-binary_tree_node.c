#include "binary_trees.h"

/**
 * *binary_tree_node - The function that creates new node
 * @parent: The pointer to the root node
 * @value: the value to be stored in the node
 * Return: The pointer to the newnode
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = malloc(sizeof(binary_tree_t));

	if (parent == NULL)
		return (NULL);
	new_node->parent = parent;
	new_node->in = value;
	new_node->left = NULL;
	new_node->right = NULL;
	return (new_node);
}
