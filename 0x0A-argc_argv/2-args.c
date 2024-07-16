#include <stdio.h>

/**
 * main - prints recived arguments
 * @argc: number of arguments supplied
 * @argv: array pointer of arguments.
 *
 * Return: 0 whem done
 */
int main(int argc, char *argv[])
{
	int  arg;

	for (arg = 0; arg < argc; arg++)
		printf("%s\n", argv[arg]);

	return (0);
}
