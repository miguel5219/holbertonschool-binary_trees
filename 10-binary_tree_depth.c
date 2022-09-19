#include "binary_trees.h"

/**
  * binary_tree_depth - Function thet measures the depth of a
  * node in a binary tree.
  *
  * @tree: is a pointer to the node to measure the depth
  *
  * Return:if tree is NULL return 0
  */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	int depth_node = 0;

	if (!tree)
		return (0);

	while (tree->parent)
	{
		depth_node++;
		tree = tree->parent;
	}
	return (depth_node);
}
