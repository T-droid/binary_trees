#include "binary_trees.h"

/**
 * binary_tree_insert_right - function to add right child
 * @parent: parent of the child to be inserted
 * @value: value to insert in the created child
 * Return: newly created node or NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new, *temp;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);

	if (new == NULL)
		return (NULL);

	if (parent->right)
	{
		temp = parent->right;
		parent->right = new;
		new->right = temp;
		temp->parent = new;
	}

	else
		parent->right = new;

	return (new);
}

