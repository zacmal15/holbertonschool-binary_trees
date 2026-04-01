#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_right - inserts node as right child of node
 * @parent: pointer to parent node
 * @value: value to store in new node
 *
 * Return: pointer to new node, otherwise NULL
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* if parent is NULL, cannot insert */
	if (parent == NULL)
		return (NULL);

	/* allocate memory for new node */
	new_node->n = value;

	/* set parent pointer */
	new_node->parent = parent;

	/* new node takes current right child, if any */
	new_node->right = parent->right;

	/*new node has no left child */
	new_node->left = NULL;

	/* if parent already has a right child */
	if (parent->right != NULL)
	{
		/* update old right child's parent to new node */
		parent->right->parent = new_node;
	}

	/* set new node as parent's right child */
	parent->right = new_node;

	return (new_node);
}
