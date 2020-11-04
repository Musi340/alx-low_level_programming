#include <stdlib.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - inserts node at index idx
 * @head: the list
 * @idx: index node is to be inserted
 * @n: data of the node
 *
 * Return: new node or NULL if it fails
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *tmp;
	listint_t *nextNode;
	listint_t *temp;
	unsigned int i;

	i = 0;
	tmp = malloc(sizeof(listint_t));
	tmp->n = n;
	tmp->next = NULL;
	temp = *head;
	while (temp != NULL)
	{
	i++;
	if (i == idx)
	{
	nextNode = temp->next;
	temp->next = tmp;
	tmp->next = nextNode;
	return (tmp);
	}
	temp = temp->next;
	}
	return (NULL);
}
