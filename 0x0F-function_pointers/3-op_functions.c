#include "3-calc.h"

/**
 * op_add - Adds two integers
 *
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The sum of a and b
 */
int op_add(int a, int b)
{
    return (a + b);
}

/**
 * op_sub - Subtracts two integers
 *
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The difference of a and b
 */
int op_sub(int a, int b)
{
    return (a - b);
}

/**
 * op_mul - Multiplies two integers
 *
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The product of a and b
 */
int op_mul(int a, int b)
{
    return (a * b);
}

/**
 * op_div - Divides two integers
 *
 * @a: Integer a
 * @b: Integer b
 *
 * Return: The result of the division of a & b
 */
int op_div(int a, int b)
{
    return (a / b);
}

/**
 * op_mod - modulus of two integers
 *
 * @a: first number
 * @b: second number
 *
 * Return: The remainde
 */
int op_mod(int a, int b)
{
    return (a % b);
}
