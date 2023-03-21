#include "main.h"

/**
 * print_last_digit - Fuction
 * @c: The variable to use to find the last digit of the c
 * A a function that prints the last digit of a number.
 * Return: the last digit
 */
int print_last_digit(int c)
{
	int lastDigit;

	lastDigit = c % 10;

	return (lastDigit);
}
