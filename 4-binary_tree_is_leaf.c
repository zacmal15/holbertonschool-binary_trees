#include "binary_trees.h"

/**
 * binary_tree_is_leaf - checks if node is a leaf
 * @node: pointer to node to check
 *
 * Return: 1 if node is a leaf, otherwise 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	/* if node is NULL, cannot be a leaf */
	if (node == NULL)
		return (0);

	/* if both left and right children are NULL, its a leaf */
	if (node->left == NULL && node->right == NULL)
		return (1);

	/* otherwise not a leaf */
	return (0);
}
