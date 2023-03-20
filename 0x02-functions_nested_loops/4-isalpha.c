#include "main.h"

/**
 * _isalpha - Entry point
 * a function that checks for alphabetic character.
 * Return: Always 0 or 1
 */
int _isalpha(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}
