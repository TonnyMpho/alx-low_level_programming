#include "main.h"

/**
 * is_palindrom - function that returns 1 if a string is a palindrome and 0 if not.
 * @s: string
 * Returnn: integer
 */
int _palindrome_recursive(char *s, int i, int j);

int is_palindrome(char *s)
{
	int length = 0;

	while (s[length] != '\0')
		length++;

	return (_palindrome_recursive(s, 0, length - 1));
}

/***
 * _palindrome_recursive - recursive function
 * @s: string
 * @i: int
 * @j: int
 */
int _palindrome_recursive(char *s, int i, int j)
{
	if (i >= j)
		return (1);

	if (s[i] != s[j])
		return (0);

	return (_palindrome_recursive(s, i + 1, j - 1));
}
