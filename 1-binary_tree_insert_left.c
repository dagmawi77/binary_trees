#include "binary_trees.h"
/**
 * binary_tree_insert_left - Inserts a node.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node
 * Return: If parent is NULL or an error occurs.
 * Description: If parent already has a left-child, the new node.
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
		parent->left->parent = new;
	}
	parent->left = new;

	return (new);
}
