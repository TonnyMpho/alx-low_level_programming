#include "main.h"

/**
 * rot13 - A function that encodes a string using rot13.
 * @str: string pointer
 *
 * Return: str
 */
char *rot13(char *str)
{
	int i = 0, n = 0;
	char alpha[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot_13[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	while (str[i] != '\0')
	{
		for (n = 0; alpha[n] != '\0'; n++)
		{
			if (str[i] == alpha[n])
			{
				str[i] = rot_13[n];
				break;
			}
		}
		i++;
	}
	return (str);
}
