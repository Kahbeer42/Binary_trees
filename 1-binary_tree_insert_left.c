#include "binary_trees.h"
/**
 * binary_tree_insert_left - The function to insert binary tree on the left
 * @parent: The pointer to inert the node
 * @value: value of the data
 * Return: the newnode
 *
 * Description: If left node already has a child, the node takes its place
 *		while the old child becomes the left node of the new child
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);
	if (parent->left != NULL)
	{
		new->left = parent->left;
		parent->left = new;
	}
	parent->left = new;
	return (new);
}
