#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * dlistint_len - returns the number of elements in a list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
	return (0);
	while (h)
	{
	h = h->next;
	i++;
	}
	return (i);
}
