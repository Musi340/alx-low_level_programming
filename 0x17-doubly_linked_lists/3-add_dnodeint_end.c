#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * add_dnodeint_end - adds node at the end of the list
 * @head: the node
 * @n: the n element of dlistint_t structure
 *
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *newnode;
	dlistint_t *tmp;

	if (head == NULL)
	{
	return (NULL);
	}
	newnode = malloc(sizeof(dlistint_t));
	if (newnode == NULL)
	return (NULL);
	newnode->n = n;
	newnode->prev = NULL;
	newnode->next = NULL;
	if (*head == NULL)
	{
	*head = newnode;
	return (*head);
	}
	else
	tmp = *head;
	{
	while (tmp->next != NULL)
	{
	tmp = tmp->next;
	}
	tmp->next = newnode;
	newnode->prev = tmp;
	tmp = newnode;
	}
	return (tmp);
}
