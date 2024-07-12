#include "main.h"

/**
 *_strlen_recursion - prints lewngth of a string
 * @s: pointer of string
 * Return: the recursion
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{
		return (0);
	}
	return (1 + _strlen_recursion(++s));
}
