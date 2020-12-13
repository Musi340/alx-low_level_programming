#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * print_dlistint - prints all the elements of a list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	i = 0;
	if (h == NULL)
	return (0);
	while (h)
	{
	printf("%d\n", h->n);
	h = h->next;
	i++;
	}
	return (i);
}
