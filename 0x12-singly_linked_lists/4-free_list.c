#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: the list
 *
 */
void free_list(list_t *head)
{
	while (head->next != NULL)
	{
		free(head->str);
		head = head->next;
	}
	free(head);
}
