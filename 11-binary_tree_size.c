#include "binary_trees.h"

/**
 * binary_tree_size - finds the size of the tree
 * @tree: root node
 * Return: 0 if NULL and size if otherwise
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0;

	if (tree == NULL)
		return (0);

	size += binary_tree_size(tree->left);
	size += binary_tree_size(tree->right);

	return (1 + size);
}
