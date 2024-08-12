#include "lists.h"

/**
 * print_listint - prints linked list elements
 * @h: linked list to print
 *
 * Return: node
 */

size_t print_listint(const listint_t *h)
{
	size_t nmb = 0;

	while (h)
	{
		printf("%d\n", h->n);
		nmb++;
		h = h->next;
	}

	return (nmb);
}
