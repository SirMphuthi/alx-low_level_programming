#include <stdio.h>

/**
 * main - prints lowercase alphabets, except q and e
 * followed by new line
 * Return: 0 always
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'e' && ch != 'q')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
