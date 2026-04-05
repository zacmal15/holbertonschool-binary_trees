#include "binary_trees.h"

/**
 * binary_tree_height - measures height of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: height of tree, otherwise 0
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t left_height;
	size_t right_height;

	/* if tree is NULL, height is 0 */
	if (tree == NULL)
		return (0);

	/* if leaf node, height is 0 */
	if (tree->left == NULL && tree->right == NULL)
		return (0);

	/* recursively get height of left subtree */
	left_height = binary_tree_height(tree->left);

	/*recursively get height of right subtree */
	right_height = binary_tree_height(tree->right);

	/* return greater height + 1 (for current edege) */
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1)
}
