#include "binary_trees.h"

/**
** @parent: a pointer to the node to insert the right-child in
 * @value: value is the value to store in the new node
 * binary_tree_insert_right - inserts a node as the right-child of another node
 * Return: a pointer to the created node, or NULL on failure
 *
 * FUNCTIONALITY*
 *
 * If the parent is NULL, return NULL.
 * Create a new node.
 * If the new node is NULL, return NULL.
 * If the parent’s right child is not NULL,
 * set the new node’s right child to the parent’s right child,
 * and set the parent of the parent’s right child to the new node.
 * Set the parent’s right child to the new node.
 * Return the new node.
 * Time Complexity: O(1)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new;

	if (parent == NULL)
		return (NULL);

	new = binary_tree_node(parent, value);
	if (new == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new->right = parent->right;
		parent->right->parent = new;
	}
	parent->right = new;
	return (new);
}
