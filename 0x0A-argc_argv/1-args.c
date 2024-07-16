#include <stdio.h>

/**
 * main - prints arguments
 * @argc: arguments counted
 * @argv: total arguments
 *
 * Return: 0
 */
int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
