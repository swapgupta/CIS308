#include "io.h"
#include <stdio.h>

/*************************************************
* Description: Displays the main menu and reads	 *
* the user's response.							 *
* Precondition: none							 *
* Post condition: the output is a char			 *
* corresponding to the menu option desired		 *
**************************************************/
char MainMenu()
{
	char answer;
	printf_s("Enter [i]nsert, [s]earch, inorder [t]raversal, or [q]uit: ");
	scanf_s("%c", &answer);
	while (answer == '\n')
	{
		scanf_s("%c", &answer);
	}
	return answer;
}

/*************************************************
* Description: Displays and reads in the number  *
* key from the user								 *
* Precondition: none							 *
* Post condition: the output is an int			 *
* corresponding to the key desired				 *
**************************************************/
int Insert()
{
	int insert;
	printf_s("Enter a number to insert: ");
	scanf_s("%d", &insert);
	while (insert == '\n')
	{
		scanf_s("%c", &insert);
	}
	return insert;

}

/*************************************************
* Description: Displays and reads in the number  *
* to search for from the user     				 *
* Precondition: none							 *
* Post condition: the output is an int			 *
* corresponding to the target key desired		 *
**************************************************/
int Search()
{
	int target;
	printf_s("Enter a number to search for: ");
	scanf_s("%d", &target);
	while (target == '\n')
	{
		scanf_s("%c", &target);
	}
	return target;
}

/*************************************************
* Description: Displays the results from the 	 *
* BST search									 *
* Precondition: variables are initialized		 *
* Post condition: prints the result of the search*
* to the console								 *
**************************************************/
void PrintSearchResults(int result, int target)
{
	if (result == 1)
	{
		printf_s("%d is in the tree\n", target);
	}
	else {
		printf_s("%d is not in the tree\n", target);
	}
}

/*************************************************
* Description: Displays all keys in the BST in	 *
* order.										 *
* Precondition: result is initialized			 *
* Post condition: all elements of the BST are    *
* printed to the console in order.				 *
**************************************************/
void InorderTraversal(char *result)
{
	printf_s("%s", result);
}