#include "main.h"

/**
 * is_prime_number -  function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 *
 * @n: number
 * Return: prime or not
 */
int prime_check(int n, int d);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return (prime_check(n, 2));
}

/**
 * prime_check - check to see if it a prime or not
 * @n: number
 * @d: divider/divisor
 * Return: prime
 */
int prime_check(int n, int d)
{
	if ((d * d) > n)
		return (1);

	if ((n % d) == 0)
		return (0);

	return (prime_check(n, d + 1));
}
