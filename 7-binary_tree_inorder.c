#include "binary_trees.h"

/**
 * inorder - function creates a binary tree node
 * @tree: pointer to the parent node of the node to create
 * @func: pointer of function
 * Return: pointer to the new node
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;
	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
