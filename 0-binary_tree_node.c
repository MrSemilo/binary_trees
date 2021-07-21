#include "binary_trees.h"

/**
* binary_tree_node - Prototype
* @parent: node
* @value: value of the node
* Return: return
*/

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *newNode = NULL;

	/**Allocate memory for new node*/
	newNode = malloc(sizeof(binary_tree_t));
	if (newNode == NULL)
		return (NULL);

	/**Initialize left and*/
	/**right children as NULL*/
	newNode->parent = parent;
	newNode->n = value;
	newNode->left = NULL;
	newNode->right = NULL;

	return (newNode);
}
