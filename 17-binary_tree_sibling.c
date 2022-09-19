#include "binary_trees.h"

/**
  * binary_tree_sibling - function tht find the sibling
  * of a node
  *
  * @node: is a pointer to the node to find the sibling
  *
  * Return: NULL
  */

binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (!node || !node->parent)
		return (NULL);

	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
