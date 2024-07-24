#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - prints name
 * @name: name to be printed
 * @f: pointer to printing func
 *
 * Return: void
 */
void print_name(char *name, void (*f)(char *))
{
if (f != NULL)
f(name);

}
