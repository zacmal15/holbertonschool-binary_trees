#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_insert_left - inserts node as left child of node
 * @parent: pointer to parent node
 * @value: value to store in new node
 *
 * Return: pointer to new node, otherwise NULL
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* if parent is NULL, cannot insert */
	if (parent == NULL)
		return (NULL);

	/* create node using malloc */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/*assign value to new node */
	new_node->n = value;

	/* set parent pointer */
	new_node->parent = parent;

	/* new node takes current left child */
	new_node->left = parent->left;

	/* new node has no right child */
	new_node->right = NULL;

	/* if parent already has left child */
	if (parent->left != NULL)
	{
		/* update old left child's parent to new node */
		parent->left->parent = new_node;
	}

	/* set new node as parent's left child */
	parent->left = new_node;

	return (new_node);
}
