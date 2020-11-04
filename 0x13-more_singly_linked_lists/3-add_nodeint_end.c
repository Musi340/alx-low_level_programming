#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 * @head: the list
 * @n: the integer element of a node
 *
 * Return: address of new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *temp;
	listint_t *tmp;

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
	tmp = *head;
	while (tmp->next != NULL)
	{
	tmp = tmp->next;
	}
	tmp->next = temp;
	}
	return (tmp);
}
