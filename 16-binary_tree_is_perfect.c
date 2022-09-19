#include "binary_trees.h"

/**
  * binary_tree_is_perfect - function that checks if a binary
  * tree is perfect
  *
  * @tree: is a pointer to the root node of the tree to check
  *
  * Return: if tree is NULL return 0
  */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	if (!tree || !binary_tree_is_full(tree))
		return (0);
	if (!tree->left && !tree->right)
		return (1);

	if (binary_tree_height(tree->left) == binary_tree_height(tree->right))
		return (binary_tree_is_perfect(tree->left) &&
		binary_tree_is_perfect(tree->right));
	return (0);
}

/**
  * binary_tree_height - function the measures the height of
  * a binary tree
  *
  * @tree: is a pointer to the root node of the tree to measure
  * the height
  *
  * Return: if tree is NULL return 0
  */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int l_height = 0, r_height = 0;

	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (0);

	l_height = binary_tree_height(tree->left);
	r_height = binary_tree_height(tree->right);

	if (l_height >= r_height)
		return (l_height + 1);
	return (r_height + 1);
}

/**
  * binary_tree_is_full - function that checks if a binary
  * tree is full
  *
  * @tree: is pointer to the root node of the tree to check
  *
  * Return: if tree is NULL return 0
  */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	if (!tree->left && !tree->right)
		return (1);

	return (binary_tree_is_full(tree->left) &&
	binary_tree_is_full(tree->right));
}













