#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * free_list - Release memory allocated for a list
 * @head: Pointer to the first node of the list to free
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (heaad->str)
			free(head->str);
		free(head);
	}
}
