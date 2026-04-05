#include "binary_trees.h"

/**
 * binary_tree_nodes - counts nodes with at least one child
 * @tree: pointer to root node of tree
 *
 * Return: number of nodes with at least one child, otherwise 0 if tree
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes;
	size_t right_nodes;

	/* if tree is NULL, there are no nodes */
	if (tree == NULL)
		return (0);

	/* recursively count nodes in left subtree */
	left_nodes = binary_tree_nodes(tree->left);

	/* recursively count nodes in right subtree */
	right_nodes = binary_tree_nodes(tree->right);

	/* if current node has at least one child, count it */
	if (tree->left != NULL || tree->right != NULL)
		return (left_nodes + right_nodes + 1);

	/* otberwise (leaf), do not count it */
	return (left_nodes + right_nodes);
}
