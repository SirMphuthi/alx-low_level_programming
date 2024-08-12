#include "main.h"
#include <stdio.h>

/**
 * clear_bit - value of bit
 * @n: pointer
 * @index: position to check
 * Return: 1 when done, -1 when fail
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int p;
	unsigned int place;

	if (index > 64)
		return (-1);
	place = index;
	for (p = 1; place > 0; p *= 2, place--)
		;

	if ((*n >> index) & 1)
		*n -= p;

	return (1);
}
