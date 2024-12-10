#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - function
 * @parent: parameter
 * @value: parameter
 * Return: right_node
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *right_node;

	if (parent == NULL)
		return (NULL);

	right_node = malloc(sizeof(binary_tree_t));

	if (right_node == NULL)
		return (NULL);
	
	right_node->n = value;
	right_node->parent = parent;
	right_node->left = NULL;
	right_node->right = parent->right;

	if (parent->right != NULL)
		parent->right->parent = right_node;

	parent->right = right_node;

	return (right_node);
}
