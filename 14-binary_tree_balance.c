#include "binary_trees.h"

/**
  * binary_tree_balance - function that measures the balance
  * factorof a binary tree
  * @tree: is a pointer to the root node of the tree
  * to measure the balance factor
  *
  * Return: if tree is NULL return 0
  */

int binary_tree_balance(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (!tree)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	return (l_height - r_height);
}


/**
  * binary_tree_height - funxtion that measures the balance
  * factor of a binary tree
  *
  * @tree: is a pointer to the root node of the tree
  * to measure the balance factor
  *
  * Return: value or 0
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l_height = 0, r_height = 0;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height >= r_height)
		return (l_height +1);
	return (r_height + 1);
}
