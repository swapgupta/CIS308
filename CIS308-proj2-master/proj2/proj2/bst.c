#include "bst.h"
#include <stdio.h>

/*************************************************
* Description: Sequences throught the tree and   *
*		inserts the new node in the correct place*					 *
* Precondition: inputs must be initialized		 *
* Post condition: the output is a pointer to the *
*	location that the new NODE is to be placed   *
**************************************************/
struct NODE* InsertNode(struct NODE* newNode, struct NODE* head)
{
	//struct NODE temp = *head;
	if (head->key == NULL)
	{
		return head;
	}
	else {
		if (newNode->key < head->key)
		{
			InsertNode(newNode, head->left);
		}
		else if (newNode->key > head->key)
		{
			InsertNode(newNode, head->right);
		}
	}
}

/*************************************************
* Description: Sequences throught the tree and   *
*		searches for a NODE with the target key  *							 *
* Precondition: inputs must be initialized		 *
* Post condition: the output is an int			 *
*	to a true/false value					     *
**************************************************/
int SearchTree(int target, struct NODE * head)
{
	struct NODE* cur = head;
	if (cur->key == NULL)
	{
		return 0;
	}
	if (cur->key == target)
	{
		return 1;
	}
	else {
		if (target < cur->key)
		{
			struct NODE* l = (cur->left);
			SearchTree(target, l);
		}
		else if (target > cur->key)
		{
			struct NODE* r = (cur->right);
			SearchTree(target, r);
		}
	}
	return 0;
}

/*************************************************
* Description:Sequences throught the tree and    *
*		prints all keys							 *		 						 *
* Precondition: inputs must be initialized		 *
* Post condition: the output is a string that    *
*		is to be printed to the console.		 *
**************************************************/
char PrintTree(struct NODE * head)
{
	char buff[100];
	if (head->left != NULL)
	{
		PrintTree(head->left);
	}

	int key = head->key;
	sprintf_s(buff, 100, "%d ", key);

	if (head->right != NULL)
	{
		PrintTree(head->right);
	}
	return *buff;
}

/*************************************************
* Description: Sequences throught the tree and   *
*		releases the memory from each NODE		 *								 *
* Precondition: inputs must be initialized		 *
* Post condition: All memory that had been       *
*		allocated to NODEs is freed.			 *
**************************************************/
void ReleaseMemory(struct NODE * head)
{
	if (head->left != NULL)
	{
		free(head->left);
	}
	if (head->right != NULL)
	{
		free(head->right);
	}
	free(*head);
}