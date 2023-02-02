#include "lists.h"
#include <stdlib.h>

/**
 * get_nodeint_at_index - returns the nth node
 * @head: pointer
 * @index: index of the node
 * Return: Always 0
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int j;

	if (head == NULL)
		return (NULL);
	for (j = 0; j < index; j++)
	{
		head = head->next;
		if (head == NULL)
			return (NULL);
	}
	return (head);
}
