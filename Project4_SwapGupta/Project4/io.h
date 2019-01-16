/*********************************************************
* Name: Swapnil Gupta                                                                        *
* Project 4 - Sequence and order validation
**********************************************************
* io.h is the header file that contains all the          *
* declarations of the functions to print and ask the user*
* for input.                                             *
**********************************************************/
#ifndef io_h
#define io_h

#include <stdio.h>
#include <stdlib.h>

#pragma warning(disable:4996)

char chooseOption(void);

int getNumberToInsert(void);

int getNumberToSearch(void);

void printTraversal(char *);

void printAlreadyInTree(int);

void printNotInTree(int);

int getNumberToDelete(void);

#endif /* io_h */

