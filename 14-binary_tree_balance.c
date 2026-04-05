#include "binary_trees.h"

/**
 * tree_height - measures the height of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: height of the tree
 */
static size_t tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	/* if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* get height of left subtree */
	left_height = tree_height(tree->left);

	/* get height of right subtree */
	right_height = tree_height(tree->right);

	/* return the greater subtree height plus current node */
	if (left_height > right_height)
		return (left_height + 1);

	return (right_height + 1);
}

/**
 * binary_tree_balance - measures the balance factor of a binary tree
 * @tree: pointer to the root node of the tree
 *
 * Return: balance factor, or 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	/* if tree is NULL, return 0 */
	if (tree == NULL)
		return (0);

	/* get height of left subtree */
	left_height = tree_height(tree->left);

	/* get height of right subtree */
	right_height = tree_height(tree->right);

	/* balance factor is left height minus right height */
	return (left_height - right_height);
}
