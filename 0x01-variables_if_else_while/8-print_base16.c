#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int numbers;
	char alphabets;

	for (numbers = 0; numbers <= 16; numbers++)
	{
		putchar(numbers + 48);
	}
	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
