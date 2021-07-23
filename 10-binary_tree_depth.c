#include "binary_trees.h"

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: node to measure the depth
 * Return: depth, or 0 if tree is NULL
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	size_t dep = 0;

	if (tree == NULL || tree->parent == NULL)
		return (0);

	dep = binary_tree_depth(tree->parent);

	return (dep + 1);
}
