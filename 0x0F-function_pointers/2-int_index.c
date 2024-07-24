#include "function_pointers.h"

/**
 * int_index - looks for sn int
 * @array: array with data
 * @size: array sizze
 * @cmp: pointer to function
 * Return: toatl integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
					return (i);

				i++;
			}
		}
	}

	return (-1);
}
