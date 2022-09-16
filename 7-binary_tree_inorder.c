 #include "binary_trees.h"

/**
  * binary_tree_inorder - Function that goes trough a binary
  * tree using in-order traversal
  * @tree: pointer to the node to check
  * @func: pointer to a function to call for each node.
  * The value in the node must be passed as a parameter to
  * this function.
  * Return: void
  */

void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
