#include <stdio.h>

/**
 * before_main - function that prints You're beat! and yet,
 * you must allow,\nI bore my house upon my back!\n
 * before the main function is executed.
 * Return: Void
 */
void __attribute__((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
