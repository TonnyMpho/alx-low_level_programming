#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int num = 612852475143;
	long int prim = 2;

	while (prim * prim <= num)
	{
		if (num % prim == 0)
		{
			num /= prim;
		}
		else
		{
			if (prim == 2)
				prim = 3;
			else
				prim += 2;
		}
	}

	printf("%li\n", num);
	return (0);
}
