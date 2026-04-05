#include "binary_trees.h"

/**
 * binary_tree_postorder - goes thrugh tree using post-order traversal
 * @tree: pointer to root node of tree
 * @func: pointer to function to call for each node
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	/* if tree or func is NULL, do nothing */
	if (tree == NULL || func == NULL)
		return;

	/* traverse left subtree first */
	binary_tree_postorder(tree->left, func);

	/* traverse right subtree second */
	binary_tree_postorder(tree->right, func);

	/* visit current node last */
	func(tree->n);
}
