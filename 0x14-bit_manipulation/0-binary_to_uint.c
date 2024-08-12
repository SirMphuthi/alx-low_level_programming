#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - converts binary to unsigned int
 * @b: char string to check
 * Return: decimal
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int first, second;
	int len;

	if (b == NULL)
		return (0);

	for (len = 0; b[len]; len++)
	{
		if (b[len] < '0' || b[len] > '1')
			return (0);
	}

	for (first = 1, second = 0, len--; len >= 0; len--, second *= 2)
	{
		if (b[len] == '1')
			first += second;
	}

	return (first);
}
