#include "main.h"

/**
 * set_bit - sets bit value
 * @n: pointer
 * @index: position
 * Return: 1 when done, o on error
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int o;

	if (index > 64)
		return (-1);

	for (o = 1; index > 0; index--, o *= 2)
		;
	*n += o;

	return (1);
}
