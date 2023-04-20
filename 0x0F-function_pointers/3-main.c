#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: argument value array
 *
 * Return: 0 Always success
 */
int main(int argc, char *argv[])
{
	int results;
	int num1, num2;
	int (*op_function)(int, int);

	if (argc != 4)
		exit(90);

	op_function = get_op_func(argv[2]);
	if(op_function == NULL)
	{
		printf("Error\n");
		exit(98);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[3]);

	if ((argv[2][0] == '/' || *argv[2] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(98);
	}

	results = op_function(num1, num2);

	printf("%d\n", results);

	return (0);
}

