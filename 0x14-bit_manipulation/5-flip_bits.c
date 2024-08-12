#include "main.h"
#include <stdio.h>

/**
 * flip_bits - converts one number to another
 * @n: first number
 * @m: second number
 * Return: total bits to be flipped
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;
	int count;

	diff = n ^ m;
	count = 0;

	while (diff)
	{
		count++;
		diff &= (diff - 1);
	}

	return (count);
}
