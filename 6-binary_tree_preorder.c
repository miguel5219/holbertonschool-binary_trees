#include "binary_trees.h"

/**
  * binary_tree_preorder - Function that goes trough a binary
  * tree using pre_order traversal
  * @tree: is a pointer to the root node of the tree to traverse
  * @func: is a pointer to a function to call for each node
  * Return: value
  */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	if (!tree || !func)
		return;

	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
