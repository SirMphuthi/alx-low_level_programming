#include "lists.h"


/**
 * add_nodeint - adds new node
 * @head: pointer to node
 * @n: element to enter node
 *
 * Return: node or NULL when false
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *space;

	space = malloc(sizeof(listint_t));
	if (!space)
		return (NULL);

	space->n = n;
	space->next = *head;
	*head = space;

	return (space);
}
