#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - frees a list
 * @head: the list
 *
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;

	temp = (*head)->next;
	*head = NULL;
	while(temp)
	{
	temp = temp->next;
	}
}
