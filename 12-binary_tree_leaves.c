#include "binary_trees.h"

/**
 * binary_tree_leaves - counts the leaves in a binary tree
 * @tree: pointer to root node of tree
 *
 * Return: number of leaves, otherwise 0 if NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_leaves;
	size_t right_leaves;

	/* if tree is NULL, no leaves exist */
	if (tree == NULL)
		return (0);

	/* if node is a leaf (no children), count as 1 */
	if (tree->left == NULL && tree->right == NULL)
		return (1);

	/* recursively count leaves in left subtree */
	left_leaves = binary_tree_leaves(tree->left);

	/* recursively count leaves in right subtree */
	right_leaves = binary_tree_leaves(tree->right);

	/* total leaves = left + right */
	return (left_leaves + right_leaves);
}
