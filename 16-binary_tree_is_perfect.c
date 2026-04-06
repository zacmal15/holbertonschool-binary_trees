#include "binary_trees.h"

/**
 * tree_depth - measures the depth of the leftmost leaf
 * @tree: pointer to root node of tree
 *
 * Return: depth of leftmost leaf
 */
static size_t tree_depth(const binary_tree_t *tree)
{
	size_t depth = 0;

	/* move down left side of tree */
	while (tree->left != NULL)
	{
		depth++;
		tree = tree->left;
	}

	return (depth);
}

/**
 * is_perfect - checks if binary tree is perfect
 * @tree: pointer to current node
 * @depth: expected leaf depth
 * @level: current level of node
 *
 * Return: 1 if subtree is perfect, otherwise 0
 */
static int is_perfect(const binary_tree_t *tree, size_t depth, size_t level)
{
	/* if node is a leaf, check if it is at the correct depth */
	if (tree->left == NULL && tree->right == NULL)
		return (depth == level);

	/* if node only has one child, tree is not perfect */
	if (tree->left == NULL || tree->right == NULL)
		return (0);

	/* check both left and right subtrees */
	return (is_perfect(tree->left, depth, level + 1)
		&& is_perfect(tree->right, depth, level + 1));
}

/**
 * binary_tree_is_perfect - checks if binary tree is perfect
 * @tree: pointer to root node of tree
 *
 * Return: 1 if tree is perfect, otherwise 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	size_t depth;

	/* if tree is NULL, not perfect */
	if (tree == NULL)
		return (0);

	/* get expected depth of leaves */
	depth = tree_depth(tree);

	/* check if tree satisfies perfect tree conditions */
	return (is_perfect(tree, depth, 0));
}
