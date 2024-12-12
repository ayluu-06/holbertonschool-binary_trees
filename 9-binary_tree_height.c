#include "binary_trees.h"

/**
 * binary_tree_height - measures the height of a binary tree
 * @tree: ptr to the root node of the tree to measure the height
 * Return: size_t
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t right, left;

	if (tree == NULL)
	{
		return (0);
	}

	left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
	right = tree->right ? 1 + binary_tree_height(tree->right) : 0;

	return (left > right ? left : right);

}
