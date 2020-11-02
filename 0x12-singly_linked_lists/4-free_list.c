#include <stdlib.h>
#include "lists.h"
/**
 * free_list - frees a list
 * @head: the list
 *
 */
void free_list(list_t *head)
{
	list_t *tmp;

	tmp = head;
	while (tmp ->next != NULL)
	{
		free(tmp );
		tmp = tmp->next;
	}
	free(tmp);
}
