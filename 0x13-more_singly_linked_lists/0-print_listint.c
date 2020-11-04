#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_listint - prints all the elements of a list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t i;

	i = 0;
	while (h != NULL)
	{
	printf("%u\n", h->n);
	i = i + 1;
	h = h->next;
	}
	return (i);
}
