#include "binary_trees.h"

/**
 * binary_tree_inorder - goes through binary tree using in-order traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function to call for each node
 *
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
	return;

	/* traverse left subtree first */
	binary_tree_inorder(tree->left, func);

	/* visit current node */
	func(tree->n);

	/* traverse right subtree */
	binary_tree_inorder(tree->right, func);
}
