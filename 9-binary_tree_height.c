#include "binary_trees.h"

/**
 * binary_tree_height - Measures the height of a binary tree
 * @tree: Pointer to the root node of the tree to measure the height
 *
 * Return: 0 if the tree is NULL
 *
 *FUNCTIONALITY*
 *
 * if the tree is NULL, return 0.
 * If the tree is not NULL, then recursively call the function
 * on the left and right subtrees.
 * if the left subtree is NULL, then set the left height to 0.
 * if the right subtree is NULL, then set the right height to 0.
 * Return the max of the left and right heights.
 *
 * Time Complexity: O(n)
 *
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t l = 0, r = 0;

		l = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		r = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((l > r) ? l : r);
	}
	return (0);
}