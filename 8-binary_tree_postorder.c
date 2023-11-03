#include "binary_trees.h"

/**
 * binary_tree_postorder - traverse the tree in post order traversal
 * @tree: root node
 * @func: function to be called at each node
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);

	func(tree->n);
}
