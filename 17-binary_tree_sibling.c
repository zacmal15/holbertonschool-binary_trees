#include "binary_trees.h"

/**
 * binary_tree_sibling - finds sibling of node
 * @node: pointer to node to find sibling
 *
 * Return: pointer to sibling node, otherwise NULL
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	/* if node or parent are NULL, no siblings exist */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* if node is left child, return right sibling */
	if (node->parent->left == node)
		return (node->parent->right);

	/* otherwise, node is right child, return left sibling */
	return (node->parent->left);
}
