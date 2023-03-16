#include "lists.h"

/**
 * dlistint_len - function that returns the number of elements in a linked list
 * @h: pointer to the beginning of the list
 * Return: number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	site_t j;

	for (j = 0; h != NULL; j++)
		h = h->next;
	return (j);
}
