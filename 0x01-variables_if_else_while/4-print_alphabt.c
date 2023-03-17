#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints the alphabet
 * in lowercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char alphabet;

	for (alphabet = 'b'; alphabet <= 'z'; alphabet++)
	{
		if (alphabet != 'e')
		{
			putchar(alphabet);
		}
	}

	putchar('\n');
	return (0);
}
