#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * insert_dnodeint_at_index - inserts node at a given position
 * @h: the list
 * @idx: the position
 * @n: the data
 *
 * Return: address of new node or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	unsigned int i;
	dlistint_t *tmp;
	dlistint_t *newnode;

	i = 0;
	if (h == NULL)
	{
	return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	tmp = *h;
	while (tmp)
	{
	i++;
	if (i == idx)
	{
	if (tmp->next != NULL)
	{
	newnode->next = tmp->next;
	newnode->next->prev = newnode;
	}
	tmp->next = newnode;
	newnode->prev = tmp;
	tmp = newnode;
	return (tmp);
	}
	tmp = tmp->next;
	}
	return (NULL);
}
