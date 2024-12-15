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
	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);
	return ((left > right ? left : right) + 1);

}

/**
 * binary_tree_balance - function
 * @tree: parameter
 * Return: left - right
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left = 0, right = 0;

	if (tree == NULL)
		return (0);

	left = binary_tree_height(tree->left);
	right = binary_tree_height(tree->right);

	return (left - right);
}
