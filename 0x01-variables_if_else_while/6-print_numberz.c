#include <stdio.h>

/**
 * main - Entry point
 * A program that prints all single digit numbers
 * of base 10 starting from 0, followed by a new line.
 * You can only use the putchar function
 * Return: Always 0 (Success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(48 + a);
	}
	putchar('\n');
	return (0);
}
