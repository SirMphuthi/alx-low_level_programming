#include "main.h"
#include <stdio.h>

/**
 * get_bit - get bit
 * @n: number to check
 * @index: index to check
 * Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int place;

	if (index > 64)
		return (-1);

	place = n >> index;

	return (place & 1);
}
