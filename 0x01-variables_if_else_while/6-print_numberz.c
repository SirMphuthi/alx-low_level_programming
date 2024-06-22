#include <stdio.h>

/**
 * main - prints single digits from base 10starting at 0
 * followed by new linie
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 48; n < 58; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
