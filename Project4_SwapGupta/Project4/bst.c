/*********************************************************
* Name: Swapnil Gupta                                                                        *
* Project 4 - Sequence and order validation
**********************************************************
* bst.c is the c file that contains all the function code*
* of bsth.h. It provides all the functionality to the    *
* binary tree                                            *
**********************************************************/
#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "bst.h"

#pragma warning(disable:4996)

/**************************************************************
* Description: finds minimum value in tree specified          *
* Precondition:                                               *
* Post condition: the smallest valued node is returned        *
***************************************************************/
Tree* findMinimum(Tree* tree) {
	if (tree->leftNode == NULL)
		return tree;
	else
		return findMinimum(tree->leftNode);
}

/**************************************************************
* Description: deletes node in tree of value value            *
* Precondition: a node with value value must exist in tree    *
* Post condition: no node with value value exists in tree     *
***************************************************************/
Tree* deleteNode(Tree** tree, int value) {
	if (*tree == NULL)
		return *tree;
	else if ((*tree)->value == value) {
		if ((*tree)->rightNode == NULL && (*tree)->leftNode == NULL) {
			release(*tree);
			return NULL;
		}
		else if ((*tree)->rightNode == NULL && (*tree)->leftNode != NULL) {
			*tree = (*tree)->leftNode;
		}
		else if ((*tree)->rightNode != NULL && (*tree)->leftNode == NULL)
			*tree = (*tree)->rightNode;
		else {
			Tree* mins = findMinimum((*tree)->rightNode);
			(*tree)->value = mins->value;
			(*tree)->rightNode = deleteNode(&((*tree)->rightNode), mins->value);
		}
	}
	else if (value < (*tree)->value)
		(*tree)->leftNode = deleteNode(&((*tree)->leftNode), value);
	else if (value >(*tree)->value)
		(*tree)->rightNode = deleteNode(&((*tree)->rightNode), value);
	return *tree;
}

/**************************************************************
* Description: creates a new node dynamically allocated with  *
*				int passed as value                           *
* Precondition: value to create a new node                    *
* Post condition: a new tree node is created                  *
***************************************************************/
Tree* newNode(int value) {
	Tree* tree = malloc(sizeof(Tree));
	tree->value = value;
	tree->rightNode = NULL;
	tree->leftNode = NULL;
	return tree;
}

/**************************************************************
* Description: Inserts value in the tree                      *
* Precondition: tree should be a Tree pointer and value should*
* be an int that is not in the tree already                   *
* Post condition: returns a tree with the value inserted      *
***************************************************************/
Tree* insertNode(Tree* tree, int value) {
	if (tree == NULL) {
		return newNode(value);
	}
	else if (value < tree->value) {
		tree->leftNode = insertNode(tree->leftNode, value);
	}
	else {
		tree->rightNode = insertNode(tree->rightNode, value);
	}
	return tree;
}

/**************************************************************
* Description: Checks if the value is in the tree             *
* Precondition: the tree should be a pointer and the value    *
* should be an int                                              *
* Post condition: returns 0 if not in tree and 1 if it is     *
***************************************************************/
int inTree(Tree* tree, int value) {
	if (tree == NULL) {
		return 0;
	}
	else if (tree->value == value) {
		return 1;
	}
	else if (value < tree->value)
		return inTree(tree->leftNode, value);
	else
		return inTree(tree->rightNode, value);
}

/**************************************************************
* Description: traverses the tree in order                    *
* Precondition: should pass a big enough string               *
* Post condition: string with all values in the tree in order *
***************************************************************/
void traversal(Tree* tree, char * string) {
	if (tree != NULL) {
		char temp[15];
		traversal(tree->leftNode, string);
		sprintf(temp, " %d", tree->value);
		strcat(string, temp);
		traversal(tree->rightNode, string);
	}
}

/**************************************************************
* Description: releases the memory of all the tree            *
* Precondition:                                               *
* Post condition: memory is freed                             *
***************************************************************/
void release(Tree* tree) {
	if (tree != NULL) {
		release(tree->leftNode);
		release(tree->rightNode);
		free(tree);
	}
}