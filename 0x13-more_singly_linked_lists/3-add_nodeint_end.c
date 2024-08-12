#include "lists.h"

/**
 * add_nodeint_end - adds a node to end of linked list
 * @head: pointer to head element
 * @n: value added to new element
 *
 * Return: node poiter or NULL if failed
 *
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *elem;
	listint_t *tmp = *head;

	elem = malloc(sizeof(listint_t));
	if (!elem)
		return (NULL);

	elem->n = n;
	elem->next = NULL;

	if (*head == NULL)
	{
		*head = elem;
		return (elem);
	}

	while (tmp->next)
		tmp = tmp->next;
	tmp->next = elem;

	return (elem);
}
