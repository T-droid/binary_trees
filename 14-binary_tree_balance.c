#include "binary_trees.h"

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: root node
 * Return: 0 if tree is NULL and balance factor if otherwise
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
}

/**
 * binary_tree_height - function to get the height of a tree
 * @tree: root node
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t  l_height, r_height;

	if (tree == NULL || (tree->left == NULL && tree->right == NULL))
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (1 + (l_height > r_height ? l_height : r_height));
}
