#include "binary_trees.h"

/**
  * binary_tree_insert_right - function that inserts a
  * node as the right-child of another node
  * @parent: is a pointer to the node to insert the right-child
  * @value: is the value to store in the new node
  *
  * Return: pointer or NULL
  */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (!parent)
		return(NULL);

	new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	if (!new_node)
		return (NULL);

	new_node->parent = parent;
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;

	if (parent->right != NULL)
		(parent->right)->parent = new_node;
	{
		new_node->right = parent->right;
		parent->right = new_node;
	}

	return (new_node);
}
