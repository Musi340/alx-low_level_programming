#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - returns the sum of all the data (n) of a list
 * @head: the list
 *
 * Return: sum or 0 if list is empty
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
	int sum;

	sum = 0;
	if (head == NULL)
	{
	return (0);
	}
	else
	{
	tmp = head;
	while(tmp != NULL)
	{
	sum += tmp->n;
	tmp = tmp->next;
	}
	return (sum);
	}
}
