#include "lists.h"

/**
 * add_dnodeint_end - Adds new node to the end a list.
 * @head: Head of the list.
 * @n: Value of the element.
 *
 * Return: Address of the new element.
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *a;
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = NULL;

	a = *head;

	if (a != NULL)
	{
		while (a->next != NULL)
			a = a->next;
		a->next = new;
	}
	else
	{
		*head = new;
	}

	new->prev = a;

	return (new);
}
