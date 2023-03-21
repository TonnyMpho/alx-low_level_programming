#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - Function
 * @n: variable to check
 * A function that prints all natural numbers
 * from n to 98, followed by a new line
 * Return: Void, nothing
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
		printf("%d", n);
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
		printf("%d", n);
	}
}
