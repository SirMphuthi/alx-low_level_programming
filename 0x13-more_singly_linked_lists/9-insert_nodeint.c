#include "lists.h"

/**
 * insert_nodeint_at_index - inserst new node
 * @head: pointer to first node
 * @idx: index to new node
 * @n: data inserted in new node
 *
 * Return: pointer
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int m;
	listint_t *nwnode;
	listint_t *tmp = *head;

	nwnode = malloc(sizeof(listint_t));
	if (!nwnode || !head)
		return (NULL);

	nwnode->n = n;
	nwnode->next = NULL;

	if (idx == 0)
	{
		nwnode->next = *head;
		*head = nwnode;
		return (nwnode);
	}

	for (m = 0; tmp && m < idx; m++)
	{
		if (m == idx - 1)
		{
			nwnode->next = tmp->next;
			tmp->next = nwnode;
			return (nwnode);
		}
		else
			tmp = tmp->next;
	}

	return (NULL);
}
