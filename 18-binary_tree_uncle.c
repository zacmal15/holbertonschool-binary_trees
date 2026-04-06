#include "binary_trees.h"

/**
 * binary_tree_uncle - finds uncle of node
 * @node: pointer to node to find uncle
 *
 * Return: pointer to uncle node, otherwise NULL
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	/* if node, parent or grandparent are NULL, no uncle */
	if (node == NULL || node->parent == NULL ||
	node->parent->parent == NULL)
		return (NULL);

	/* if parent is left child, uncle is rght child of grandparent */
	if (node->parent->parent->left == node->parent)
		return (node->parent->parent->right);

	/* otherwise, uncle is left child of grandparent */
}
