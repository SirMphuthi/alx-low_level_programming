#include "lists.h"

/**
 * sum_dlistint - Returns sum of all data in a doubly linked list.
 *
 * @head: Head of the list.
 *
 * Return: Sum of the data.
 */

int sum_dlistint(dlistint_t *head)
{
	int data;

	data = 0;

	if (head != NULL)
	{
		while (head->prev != NULL)
			head = head->prev;

		while (head != NULL)
		{
			data += head->n;
			head = head->next;
		}
	}

	return (data);
}
