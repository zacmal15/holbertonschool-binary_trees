#include "binary_trees.h"

/**
 * binary_tree_uncle - finds the uncle of a node
 * @node: pointer to the node to find the uncle
 *
 * Return: pointer to the uncle node, or NULL if none
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *grandparent;

	/* if node is NULL or has no parent, it has no uncle */
	if (node == NULL || node->parent == NULL)
		return (NULL);

	/* get the grandparent */
	grandparent = node->parent->parent;

	/* if grandparent is NULL, node has no uncle */
	if (grandparent == NULL)
		return (NULL);

	/* if parent is left child, uncle is right child */
	if (grandparent->left == node->parent)
		return (grandparent->right);

	/* otherwise, uncle is left child */
	return (grandparent->left);
}
