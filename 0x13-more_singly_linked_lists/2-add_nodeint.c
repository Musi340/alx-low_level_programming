#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 * @head: the list
 * @n: the integer element of a node
 *
 * Return: address of new element
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *temp;

	temp = malloc(sizeof(listint_t));
	if (temp == NULL)
	{
	return (NULL);
	}
	temp->n = n;
	temp->next = NULL;
	if (*head == NULL)
	{
	*head = temp;
	}
	else
	{
	temp->next = *head;
	*head = temp;
	}
	return (*head);
}
