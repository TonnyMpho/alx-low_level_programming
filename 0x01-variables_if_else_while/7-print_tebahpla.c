#include <stdio.h>

/**
 * main - Entry point
 * A program that prints the lowercase alphabet
 * in reverse, followed by a new line.
 * Return: Always 0 (success)
 */
int main(void)
{
	char reverseAlphabets;

	for (reverseAlphabets = 'z'; reverseAlphabets <= 'a'; reverseAlphabets--)
	{
		putchar(reverseAlphabets);
	}
	putchar('\n');
	return (0);
}
