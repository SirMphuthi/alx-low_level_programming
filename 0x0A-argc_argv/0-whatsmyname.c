#include <stdio.h>

/**
 * main - prints program name
 * @argc: total agruments
 * @argv: argument array
 *
 * Return: 0 when done.
 */
int main(int argc, char **argv)
{
	(void)argc;

	printf("%s\n", argv[0]);
	return (0);
}
