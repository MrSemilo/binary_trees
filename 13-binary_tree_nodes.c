#include "binary_trees.h"

/**
 * binary_tree_nodes -  prototype
 * @tree: root node of the tree to count the number of nodes
 * Return: return
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t left_nodes = 0, right_nodes = 0;

	if (tree == NULL)
		return (0);

	left_nodes = binary_tree_nodes(tree->left);
	right_nodes = binary_tree_nodes(tree->right);

	if (tree->left != NULL || tree->right != NULL)
		return (left_nodes + right_nodes + 1);

	return (0);
}
