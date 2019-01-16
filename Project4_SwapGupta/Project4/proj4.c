/*********************************************************
* Name: Swapnil Gupta                                                                        *
* Project 4 - Sequence and order validation 
**********************************************************
* proj4.c is the main c file that calls all the functions 							
**********************************************************/
#include "io.h"
#include "bst.h"
#include <string.h>

#pragma warning(disable:4996)

int main() {
	Tree* tree = NULL;
	char o = 'a';
	int i;
	int ans;
	while (o != 'q') {
		o = chooseOption();
		if (o == 'i') {
			i = getNumberToInsert();
			ans = inTree(tree, i);
			if (ans == 0) {
				tree = insertNode(tree, i);
			}
			else
				printAlreadyInTree(i);
		}
		else if (o == 's') {
			i = getNumberToSearch();
			ans = inTree(tree, i);
			if (ans == 0)
				printNotInTree(i);
			else
				printAlreadyInTree(i);
		}
		else if (o == 't') {
			char string[100];
			strcpy(string, "");
			traversal(tree, string);
			printTraversal(string);
		}
		else if (o == 'd') {
			i = getNumberToDelete();
			ans = inTree(tree, i);
			if (ans == 0)
				printNotInTree(i);
			else
				tree = deleteNode(&tree, i);
		}
	}
	release(tree);
	return 0;
}
