#include "main.h"

/**
 * is_prime_number -  function that returns 1 if the
 * input integer is a prime number, otherwise return 0
 * is_prime_check - function checks the recursive case
 *
 * @n: number
 * @d: divisor
 * Return - prime or not
 */
int is_prime_check(int n, int d);

int is_prime_number(int n)
{
	if (n <= 1)
		return (0);

	return is_prime_check(n, 2);
}

int is_prime_check(int n, int d)
{
	if ((d * d) > n)
		return (1);

	if ((n % d) == 0)
		return (0);

	return is_prime_check(n, d + 1);
}
