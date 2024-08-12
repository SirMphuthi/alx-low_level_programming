#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node
 * @head: pointer to first node
 * @index:
 * index of node to delete
 *
 * Return: 1 when done and 0 when fail
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *tmp = *head;
	listint_t *curr = NULL;
	unsigned int m = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(tmp);
		return (1);
	}

	while (m < index - 1)
	{
		if (!tmp || !(tmp->next))
			return (-1);
		tmp = tmp->next;
		m++;
	}

	curr = tmp->next;
	tmp->next = curr->next;
	free(curr);

	return (1);
}
