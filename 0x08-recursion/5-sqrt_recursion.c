#include "main.h"

/**
 * _sqrt - finds square root valu
 * @prev: previ value
 * @root: square value
 * Return: square root
 */
int _sqrt(int prev, int root)
{
	if (prev > root)
	{
		return (-1);
	}
	else if (prev * prev == root)
	{
		return (prev);
	}
	return (_sqrt(prev + 1, root));
}

/**
 * _sqrt_recursion - recursive square root
 * @n: number to look for squareroot
 * Return: 1 if squareeoot found and -1 if not found , else recursion
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}

	return (_sqrt(1, n));
}
