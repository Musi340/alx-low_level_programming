#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes node at index index
 * @head: the list
 * @index: index to delete
 *
 * Return: 1 if successful 0r -1 if fail
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp;
	listint_t *nextNode;
	unsigned int i;

	i = 0;
	if (head == NULL)
	{
	return;
	}
	if (index == 0)
	{
	nextNode = (*head)->next;
	free(*head);
	*head = nextNode;
	return (1);
	}
	if (index == 1)
	{
	nextNode = (*head)->next->next;
	free((*head)->next);
	(*head)->next = nextNode;
	return (1);
	}
	tmp = *head;
	while (tmp != NULL)
	{
	i++;
	if (i == index)
	{
	nextNode = tmp->next->next;
	free(tmp->next);
	tmp->next = nextNode;
	return (1);
	}
	tmp = tmp->next;
	}
	return (-1);
}
