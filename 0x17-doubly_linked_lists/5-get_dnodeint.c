#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * get_dnodeint_at_index - adds node at the end of the list
 * @head: the list
 * @index: the index of element being searched
 *
 * Return: the node or NULL if not found
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *tmp;
	unsigned int i;

	i = 0;
	if (head == NULL)
	{
	return (NULL);
	}
	tmp = head;
	while (tmp)
	{
	i++;
	if (i == index + 1)
	{
	return (tmp);
	}
	tmp = tmp->next;
	}
	return (NULL);
}
