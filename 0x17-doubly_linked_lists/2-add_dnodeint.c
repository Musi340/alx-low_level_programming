#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * add_dnodeint - adds node at the beginning of the list
 * @head: the node
 * @n: the n element of dlistint_t structure
 *
 * Return: address of new element or NULL if failed
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *newnode;

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
	free (newnode);
	}
	else
	{
	newnode->next = *head;
	*head = newnode;
	free (newnode);
	}
	return (*head);
}
