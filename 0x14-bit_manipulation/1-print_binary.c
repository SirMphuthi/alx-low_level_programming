#include "main.h"
#include <stdio.h>

/**
 * print_binary - prints binary numbers
 * @n: number to print in banary
 *
 * Return: void
 */

void print_binary(unsigned long int n)
{
	unsigned long int tmp;
	int move;

	if (n == 0)
	{
		printf("0");
		return;
	}

	for (tmp = n, move = 0; (tmp >>= 1) > 0; move++)
		;

	for (; move >= 0; move--)
	{
		if ((n >> move) & 1)
			printf("1");
		else
			printf("0");
	}
}
