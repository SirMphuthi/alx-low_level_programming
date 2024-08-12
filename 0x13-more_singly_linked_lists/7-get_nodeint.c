#include "lists.h"

/**
 * get_nodeint_at_index - returns node of index
 * @head: first node
 * @index: imdex of node to return
 *
 * Return: node pointer
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int m = 0;
	listint_t *tmp = head;

	while (tmp && m < index)
	{
		tmp = tmp->next;
		m++;
	}

	return (tmp ? tmp : NULL);
}
