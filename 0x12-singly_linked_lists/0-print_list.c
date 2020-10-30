#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * print_list - prints all the elements of a list
 * @h: the list
 *
 * Return: number of nodes
 */
size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	if (h == NULL || len == NULL)
	return (0);
	else
	{
	while (h)
	{
	if (h->str == 0)
	printf("[0] (nil)\n");
	else
	{
	printf("[%u] ", h->len);
	printf("%s \n", h->str);
	}
	h = h->next;
	i = i + 1;
	}
	return (i);
	}
}

