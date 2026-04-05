#include "binary_trees.h"

/**
 * binary_tree_size - measures size of binary tree
 * @tree: pointer to root node of tree
 *
 * Return: number of nodes in tree, otherwise 0 if NULL
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t left_size;
	size_t right_size;

	/* if tree is NULL, size is 0 */
	if (tree == NULL)
		return (0);

	/* recursively count nodes in left subtree */
	left_size = binary_tree_size(tree->left);

	/* recursively count nodes in right subtree */
	right_size = binary_tree_size(tree->right);

	/* total size = left + right + current node */
	return (left_size + right_size + 1);
}
