#include "binary_trees.h"

/**
  * binary_tree_leaves - function that counts the
  * leaves iin a binary tree
  *
  * @tree: is a poiinter to the root node of the
  * tree to count the number of leaves
  *
  * Return: if tree is NULL return 0
  */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t temp;

	if (!tree)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	temp = (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
	return (temp);
}
