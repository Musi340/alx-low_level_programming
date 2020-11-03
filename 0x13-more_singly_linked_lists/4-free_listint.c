#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint - frees a list
 * @head: the list
 *
 */
void free_listint(listint_t *head)
{
	listint_t *tmp;

	tmp = head;
	while(tmp)
	{
	free(tmp);
	tmp = tmp->next;
	}
}
