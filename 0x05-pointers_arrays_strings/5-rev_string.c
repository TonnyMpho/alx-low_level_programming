#include "main.h"

/**
 * rev_string - A function that reverses a string.
 * @s: string pointer to be reversed
 * Return: Void
 */

void rev_string(char *s)
{
	char temp = s[0];
	int count = 0;
	int i;

	while (s[count] != '\0')
	count++;
	for (i = 0; i < count; i++)
	{
		counter--;
		temp = s[i];
		s[i] = s[count];
		s[count] = temp;
	}
}
