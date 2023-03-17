#include <stdio.h>

/**
 * main - Entry point
 * Write a program that prints all the numbers
 * of base 16 in lowercase, followed by a new line.
 * Return: Always 0 (Success)
 */
int main(void)
{
	int base16;

	for (base16 = 0; base16 <= 16; base16++)
	{
		putchar(base16 + 48);
	}
	putchar('\n');
	return (0);
}
