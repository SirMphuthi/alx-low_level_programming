#include <stdio.h>

/**
 * main - prints lowercase alphabets in reverse
 * followed by new line
 * Return: 0 always
 */
int main(void)
{
	char ch;

	for (ch = 'z'; ch >= 'a'; ch--)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);

}
