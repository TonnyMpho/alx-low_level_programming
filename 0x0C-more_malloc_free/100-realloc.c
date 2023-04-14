#include "main.h"
#include <stdlib.h>

void *_memcpy(char *dest, char *src, int size);
/**
 * _realloc - function that reallocates a memory block using malloc and free
 * @ptr: pointer to previously allocated memory
 * @old_size: is the size, in bytes, of the allocated space for ptr
 * @new_size: is the new size, in bytes of the new memory block
 * Return: pointer to new allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *new_ptr;

	if (new_size == old_size)
		return (ptr);

	if (ptr == NULL)
		return (malloc(new_size));

	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(new_size);

	_memcpy(new_ptr, ptr, old_size < new_size ? old_size : new_size);

	free(ptr);
	return (new_ptr);
}
/**
 * _memcpy - function that copies memory
 * @dest: destination pointer
 * @src: new destination
 * @size: size of memory in bytes
 * Return: pointer to copied memory
 */
void *_memcpy(char *dest, char *src, int size)
{
	while (size--)
		*dest++ = *src++;
	return (dest);
}
