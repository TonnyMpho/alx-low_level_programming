#include <stdio.h>
#include "function_pointers.h"

/**
 * print_name - function that prints a name.
 * @name: name of the person to print
 * @f: pointer to function
 *
 * Return: Void - Nothing
 */
void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;
	(*f)(name);
}
