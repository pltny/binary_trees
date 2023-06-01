#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary node
 * @parent: A pointer to the parent o
 * @value: The value to put in the new node.
 *
 * Return: If an error
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	new = malloc(sizeof(binary_tree_t));
	if (new == NULL)
		return (NULL);

	new->n = value;
	new->parent = parent;
	new->left = NULL;
	new->right = NULL;

	return (new);
}
