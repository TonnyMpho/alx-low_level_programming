#include "variadic_functions.h"

/**
 * print_strings - function that prints strings, followed by a new line.
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: Void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i = 0;
	char *ptr;

	va_start(ap, n);

	while (i < n)
	{
		ptr = va_arg(ap, char*);
		if (ptr == NULL)
			printf("(nil)");
		else
			printf("%s", ptr);

		if (separator != NULL && i != n - 1)
			printf("%s", separator);

		i++;
	}
	va_end(ap);
	printf("\n");
}
