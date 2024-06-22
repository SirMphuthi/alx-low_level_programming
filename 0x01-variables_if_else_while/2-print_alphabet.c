#include <stdio.h>

/**
 * main - prints alphabets in lowercase
 * new line
 * Return: o always
 */
int main(void)
{
	char ch;

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');
	return (0);
}
