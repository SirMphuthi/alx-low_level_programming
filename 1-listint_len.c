#include "lists.h"

/**
 * listint_len - retutns elements in linked list
 * @h: linked list to traverse
 *
 * Return: total nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t nmb = 0;

	while (h)
	{
		nmb++;
		h = h->next;
	}

	return (nmb);
}
