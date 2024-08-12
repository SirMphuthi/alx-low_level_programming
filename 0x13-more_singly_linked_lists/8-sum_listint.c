#include "lists.h"

/**
 * sum_listint - returns sum of data in Listint list
 * @head: first node
 *
 * Return: total sum
 */

int sum_listint(listint_t *head)
{
	int sum = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		sum += tmp->n;
		tmp = tmp->next;
	}

	return (sum);
}
