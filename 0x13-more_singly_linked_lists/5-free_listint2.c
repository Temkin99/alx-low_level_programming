#include "lists.h"
#include <stdio.h>
/**
 * free_listint2 - free a linked list of int and add null
 * @head: pointer of pointer that contain adress of
 * Return: nothing
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	if(head == NULL)
		return;
	while (*head)
	{
		temp = (*head)->next;
		free(*head);
		*head = temp;
	}
	*head = NULL;
}
