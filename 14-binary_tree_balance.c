#include "binary_trees.h"

/**
 * binary_tree_balance - measures balance factor of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: balance factor, otherwise 0 if NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	/* if tree is NULL, balance factor is 0 */
	if (tree == NULL)
		return (0);

	/* get height of left subtree */
	left_height = binary_tree_height(tree->left);

	/*get height of right subtree */
	right_height = binary_tree_height(tree->right);

	/* balance factor = left height - right height */
	return (left_height - right_height);
}
