#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - gets the nth node of a list
 * @head: the list
 * @index: position of the node
 *
 * Return: node or NULL if not found
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int i;

	i = 0;
	tmp = head;
	while (tmp != NULL)
	{
	i++;
	if (i == index)
	{
	return (tmp);
	}
	tmp = tmp->next;
	}
	return (NULL);
}
