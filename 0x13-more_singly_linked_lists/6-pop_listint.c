#include "lists.h"

/**
 * pop_listint - removes head node
 * @head: pointer to linked list
 *
 * Return: data fromn removed element
 */

int pop_listint(listint_t **head)
{
	listint_t  *tmp;
	int nmb;

	if (!head || !*head)
		return (0);

	nmb = (*head)->n;
	tmp = (*head)->next;
	free(*head);
	*head = tmp;

	return (nmb);
}
