#include "binary_trees.h"

/**
 * binary_tree_size - function
 * @tree: parameter
 * Return: 0 or size
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);
	else
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
}
