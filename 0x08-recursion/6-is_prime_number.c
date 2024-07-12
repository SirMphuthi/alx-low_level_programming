#include "main.h"

int prime_num(int n, int i);

/**
 * is_prime_number - checks of number if a number is a prime number.
 * @n: number to check
 *
 * Return: 1 if n is a prime or o if not
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	return (prime_num(n, n - 1));
}

/**
 * prime_num - checks prime numbers recursivly
 * @n: number to check
 * @i: iterator
 * Return: 1 if prime, 0 if not
 */
int prime_num(int n, int i)
{
	if (i == 1)
		return (1);
	if (n % i == 0 && i > 0)
		return (0);
	return (prime_num(n, i - 1));
}
