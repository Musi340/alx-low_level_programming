#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_dlistint - frees a list
 * @head: the list
 *
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;

	if (head != NULL)
	{
	tmp = head;
	while (tmp)
	{
	free(tmp);
	tmp = tmp->next;
	}
	}
}
