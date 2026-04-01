#include "binary_trees.h"

/**
 * binary_tree_delete - deletes entire binary tree
 * @tree: pointer to root node of tree
 *
 * Return: nothing
 */
void binary_tree_delete(binary_tree_t *tree)
{
	/*if tree is NULL, nothing to delete */
	if (tree == NULL)
		return;

	/* delete left subtree first */
	binary_tree_delete(tree->left);

	/* delete right subtree second */
	binary_tree_delete(tree->right);

	/* delete current node last */
	free(tree);
}
