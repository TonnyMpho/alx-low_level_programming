#include "main.h"

/**
 * leet - A function that encodes a string into 1337.
 * Letters a and A should be replaced by 4
 * Letters e and E should be replaced by 3
 * Letters o and O should be replaced by 0
 * Letters t and T should be replaced by 7
 * Letters l and L should be replaced by 1
 *
 * @str: string pointer
 * Return: 1337 encoded string
 */
char *leet(char *str)
{
	char alpha[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";

	int a, n;

	for (a = 0; str[a] != '\0'; a++)
	{
		for (n = 0; n < 10; n++)
		{
			if (str[a] = alpha[n])
				str[a] = numbers[n];

		}
	}

	return (str);
}
