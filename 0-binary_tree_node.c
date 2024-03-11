#include "binary_trees.h"


/**
 * binary_tree_node - Constructs a new binary tree node
 * @parent: Pointer to the parent node of the newly created node
 * @value: Value to stored in the newly create nnode
 * Return: Pointer to the newly created node, or NULL if creation failed
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	/* Allocates memory for new node*/
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);
	/* Allocate memory for new node */
	new_node = malloc(sizeof(binary_tree_t));
	if (new_node == NULL)
		return (NULL);

	/* Assign given value and parent*/
	new_node->n = value;
	new_node->parent = parent;

	/* Initialize left and right child pointers to NULL*/
	new_node->left = NULL;
	new_node->right = NULL;


	return (new_node);
}
