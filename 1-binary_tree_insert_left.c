#include "binary_trees.h"
/**
 * binary_tree_insert_left - The function to insert binary tree on the left
 * @parent: The parent node
 * @value: value of the data
 * Return: the newnode
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (new == NULL)
		return (NULL);
	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	parent->left = new;
	return (new);
}
