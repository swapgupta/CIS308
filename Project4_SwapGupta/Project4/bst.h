/*********************************************************
* Name: Swapnil Gupta                                                                        *
* Project 4 - Sequence and order validation
**********************************************************
* bst.h is the header file that contains all the         *
* declarations of the Tree struct's function and the     *
* struct itself. Tree is a dinamic binary tree             *
**********************************************************/
#ifndef bst_h
#define bst_h

#include <stdlib.h>

#pragma warning(disable:4996)

typedef struct tree {
	int value;
	struct tree* leftNode;
	struct tree* rightNode;
} Tree;

Tree* insertNode(Tree*, int);

int inTree(Tree*, int);

void traversal(Tree*, char *);

void release(Tree*);

Tree* deleteNode(Tree**, int);


#endif /* bst_h */