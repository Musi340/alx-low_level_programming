#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - deltes the head
 * @head: the list
 *
 * Return: n element of node
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int k;

	if (*head == NULL)
	return (0);
	tmp = *head;
	k = tmp->n;
	*head = (*head)->next;
	free(tmp);
	return (k);
}
