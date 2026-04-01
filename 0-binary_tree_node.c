#include "binary_trees.h"
#include <stdlib.h>

/**
 * binary_tree_node - creates a binary tree node
 * @parent: pointer to parent node
 * @value: value to store in new node
 *
 * Return: pointer to new node, otheriwse NULL
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	/* pointer that holds new node */
	binary_tree_t *new_node;

	/* allocate memory for one binary_tree_t struct */
	new_node = malloc(sizeof(binary_tree_t));

	/* check if malloc failed */
	if (new_node == NULL)
		return (NULL);

	/* assign value to node */
	new_node->n = value;

	/* set parent pointer */
	new_node->parent = parent;

	/* initialise children to NULL (no children rn) */
	new_node->left = NULL;
	new_node->right = NULL;

	return (new_node);
}
