#include "lists.h"

/**
 * dlistint_len - Returns elements of  double linked list.
 *
 * @h: Head of the list.
 * Return: Total nodes.
 */

size_t dlistint_len(const dlistint_t *h)
{
	int counter;

	counter = 0;

	if (h == NULL)
		return (counter);

	while (h->prev != NULL)
		h = h->prev;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}

	return (counter);
}
