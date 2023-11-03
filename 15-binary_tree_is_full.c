#include "binary_trees.h"

/**
 * binary_tree_is_full - checks if the binary tree has either 0 or exactly two children
 * @tree: root node
 * Return: 0 if tree is NULL or not full and 1 if otherwise
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_is_full, right_is_full;

	if (tree == NULL)
		return (0);

	if ((tree->left == NULL) ^ (tree->right == NULL))
		return (1);
	left_is_full = binary_tree_is_full(tree->left);
	right_is_full = binary_tree_is_full(tree->right);

	return (left_is_full && right_is_full);
}
