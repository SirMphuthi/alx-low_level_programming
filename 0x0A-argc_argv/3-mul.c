#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the product of two numbers, followed by new line.
 * @argc: Number of arguments supplied
 * @argv: An array of pointers.
 *
 * Return: - 0 when two argumnets recieved
 *  - 1 when no argumenys are recieved.
 */
int main(int argc, char *argv[])
{
	int num1, num2, prod;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	prod = num1 * num2;

	printf("%d\n", prod);

	return (0);

