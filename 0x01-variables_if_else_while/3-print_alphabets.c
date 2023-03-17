#include <stdio.h>

/**
 * main -Entry point
 * Write a program that prints the alphabet in lowercase,
 * and then in uppercase, followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	char lowerAlphhabets;
	char upperAlphabets = 'A';

	for (lowerAlphabets = 'a'; lowerAphabets <= 'z'; lowerAlphabets++)
	{
		putchar(lowerAlphabets);
	}

	while (upperAlphabets <= 'Z')
	{
		putchar(upperAlphabets);
		upperAphabets++;
	}
	putchar('\n');
	return (0);
}
