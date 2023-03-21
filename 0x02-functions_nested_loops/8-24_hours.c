#include "main.h"

/**
 * jack_bauer - Function
 * A function that prints every minute of the day of
 * Jack Bauer, starting from 00:00 to 23:59.
 * Return: nothing Void
 */
void jack_bauer(void)
{
	int hours = 0;
	int minutes = 0;

	while (hours <= 23)
	{
		while (minutes <= 59)
		{
			_putchar((hours / 10) + 48);
			_putchar((hours % 10) + 48);
			_putchar(':');
			_putchar((minutes / 10) + 48);
			_putchar((minutes % 10) + 48);
			_putchar('\n');
			minutes++;
		}
		hours++;
	}
}
