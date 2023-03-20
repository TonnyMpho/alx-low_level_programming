#include "main.h"

/**
 * int islower - Entry point
 * @c: The number to be checked
 * A finction that checks for lowercase character
 * Return: Always 0
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
	{
		return (1);
	}
	return (0);
}
