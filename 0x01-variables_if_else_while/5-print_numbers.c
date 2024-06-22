#include <stdio.h>

/**
 * main - prints sinle numbers of base 10 starting from 0
 *followed by new lines
 * Return: 0 always
 */
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
		printf("%d", n);
	printf("\n");
	return (0);
}
