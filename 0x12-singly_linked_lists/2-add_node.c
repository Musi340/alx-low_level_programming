#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_node - adds a node at the start of a list
 * @head: the node to be added
 * @str: str to be copied to the str node member
 *
 * Return: the address of the new element
 */
list_t *add_node(list_t **head, const char *str)
{
	int i;

	if (head == NULL)
	return (NULL);
	else
	{
	i = 0;
	list_t *temp;

	temp = malloc(sizeof(list_t));
	if (temp == NULL)
	{
	return (NULL);
	}
	if (str == NULL)
	return (NULL);
	for (i = 0; str[i] != '\0'; ++i)
	{
	}
	temp->len = i;
	temp->str = ((char *)str);
	temp->next = *head;
	*head = temp;
	return (*head);
	}
}
