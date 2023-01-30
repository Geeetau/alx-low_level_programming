#include "stdio.h"
#include "lists.h"

/**
 * print_list - prints all the elements of a list
 * @h: pointer
 * Return: no of nodes
 */
size_t print_list(const list_t *h)
{
	int count = 0;

	while (h)
	{
		if (h->str == NULL)
		{
			_putchar("[0] (nil)\n");
		}
		else
		{
			_putchar("[%d] %s\n", h->len, h->str);
		}
		counnt++;
		h = h->next;
	}
	return (count);
}
