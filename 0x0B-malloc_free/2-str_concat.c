#include "main.h"
#include <stdlib.h>

/**
 * str_concat - function that concatenates two strings.
 * @s1: String
 * @s2: string
 * Return: pointer to str_concat
 */
char *str_concat(char *s1, char *s2)
{
	int a, b, i, j;
	int  length_1, length_2;
	char *concat;
	a = 0;
	b = 0;
	
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	
	length_1 = strlen(s1);
	length_2 = strlen(s2);
	
	concat = malloc(len1 + len2 + 1);
	
	if (concat == NULL)
		return NULL;
	
	for (i = 0; s1[i] != '\0'; i++)
		concat[i] = s1[i];
	
	for (j = 0; s2[j] != '\0'; j++)
		concat[i + j] = s2[j];
	
	concat[i + j] = '\0';
	
	return concat;
}
