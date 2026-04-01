#include "binary_trees.h"

/**
 * binary_tree_preorder - goes through binary tree using preorder traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function to call each node
 *
 * Return: nothing
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* visit current node */
	func(tree->n);

	/* traverse left subtree */
	binary_tree_preorder(tree->left, func);

	/* traverse right subtree */
	binary_tree_preorder(tree->right, func);
}
