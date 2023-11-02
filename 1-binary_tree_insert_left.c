#include "binary_trees.h"

/**
 * binary_tree_insert_left - function to insert child to the left of the parent
 * @parent: pointer to the node to insert the left child in
 * @value: value to insert int the created node
 * Return: pointer to the created node or  NULL
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *ptr, *ptr2;

	if (parent == NULL)
		return (NULL);

	ptr = binary_tree_node(parent, value);
	if (ptr == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		ptr2 = parent->left;
		parent->left = ptr;
		ptr->left = ptr2;
		ptr2->parent = ptr;
	}
	else
		parent->left = ptr;

	return (ptr);
}
