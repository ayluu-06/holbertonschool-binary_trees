#include "binary_trees.h"
#include <stdlib.h>

/**
 *
 *
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *left_node;

	if (parent == NULL)
		return (NULL);

	left_node = malloc(sizeof(binary_tree_t));

	if (left_node == NULL)
		return (NULL);

	left_node->n = value;
	left_node->parent = parent;
	left_node->left = parent->left;
	left_node->right = NULL;

	if (parent->left != NULL)
	{
		parent->left->parent = left_node;
		parent->left = left_node;
	}
	return (left_node);
}
