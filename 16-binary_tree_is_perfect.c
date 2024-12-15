#include "binary_trees.h"

/**
 * aux_height - calculates binary tree height
 * @tree: pointer to the root of the tree to measure
 * Return: tree height
 */

int aux_height(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (tree == NULL)
		return (0);

	lh = aux_height(tree->left);
	rh = aux_height(tree->right);

	return (1 + (lh > rh ? lh : rh));
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree to check
 * Return: 1 if tree is perfect, else 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int lh;
	int rh;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	lh = aux_height(tree->left);
	rh = aux_height(tree->right);

	if (lh != rh)
		return (0);

	return (binary_tree_is_perfect(tree->left) &&
			binary_tree_is_perfect(tree->right));
}
