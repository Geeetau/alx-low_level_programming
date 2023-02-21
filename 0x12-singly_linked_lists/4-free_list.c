#include "lists.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * free_list - Release memory allocated for a list
 * @head: Pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
			free(head->str);
		free(head);
	}
}
