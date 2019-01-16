/*********************************************************
* Name: Swapnil Gupta                                                                        *
* Project 4 - Sequence and order validation
**********************************************************
* io.c is the c file that contains all the function code *
* of io.h. It provides all the functionality to the      *
* for how the console application interacts with the user*
**********************************************************/
#include "io.h"

#pragma warning(disable:4996)

int getNumberToDelete() {
	printf("Enter a number to delete: ");
	int a;
	scanf("%d", &a);
	return a;
}


/**************************************************************
* Description: Asks user for what action they want to perform *
* Precondition:                                               *
* Post condition: returns the character that user input       *
***************************************************************/
char chooseOption() {
	printf("Enter (i)nsert, (s)earch, inorder (t)raversal, (d)elete or (q)uit: ");
	char a;
	scanf(" %c", &a);
	return a;
}

/**************************************************************
* Description: Asks user for a number to insert               *
* Precondition:                                               *
* Post condition: returns the integer that user input         *
***************************************************************/
int getNumberToInsert() {
	printf("Enter a number to insert: ");
	int a;
	scanf("%d", &a);
	return a;
}

/**************************************************************
* Description: Asks user for a number to search               *
* Precondition:                                               *
* Post condition: returns the integer that user input         *
***************************************************************/
int getNumberToSearch() {
	printf("Enter number to search for: ");
	int a;
	scanf("%d", &a);
	return a;
}

/**************************************************************
* Description: prints a string                                *
* Precondition:                                               *
* Post condition:                                             *
***************************************************************/
void printTraversal(char * string) {
	printf("%s\n", string);
}

/**************************************************************
* Description: prints the integer passed and tells the user   *
* that is already there                                       *
* Precondition:                                               *
* Post condition:                                             *
***************************************************************/
void printAlreadyInTree(int a) {
	printf("%d is in the tree\n", a);
}

/**************************************************************
* Description: prints the integer passed and tells the user   *
* that is not there                                           *
* Precondition:                                               *
* Post condition:                                             *
***************************************************************/
void printNotInTree(int a) {
	printf("%d is not in the tree\n", a);
}

