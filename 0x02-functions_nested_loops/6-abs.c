#include "main.h"

/**
 * _abs - Function Entry point
 * @c: number to find the absolute value from
 * A function that computes the absolute value of an integer.
 * Retuen: Return absolute value
 */
int _abs(int c)
{
	if (c < 0)
	{
		return (c * (-1));
	}
	return (c);
}
