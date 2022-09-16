#include "binary_trees.h"

/**
  * binary_tree_height - function that measures the height
  * of a binary tree
  *
  * @tree: pointer to the rrot node of the tree to measure
  * the height
  *
  * Return: tree height
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_h = 0, right_h = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (0);

	left_h = binary_tree_height(tree->left);
	right_h = binary_tree_height(tree->right);

	if (left_h >= right_h)
		return (left_h + 1);
	return (right_h + 1);
}
