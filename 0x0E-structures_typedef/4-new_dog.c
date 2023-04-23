#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - function that creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: name of the owner
 * Return: pointer to new dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	int i = 0, j = 0;
	int a = 0, b = 0;

	dog_t *new_dog_1 = malloc(sizeof(dog_t));

	if (new_dog_1 == NULL)
		return (NULL);

	while (name[i] != '\0')
		i++;

	while (owner[j] != '\0')
		j++;

	new_dog_1->name = malloc(i + 1);
	new_dog_1->owner = malloc(j + 1);

	if (new_dog_1->name == NULL || new_dog_1->owner == NULL)
	{
		free(new_dog_1->name);
		free(new_dog_1->owner);
		free(new_dog_1);
		return (NULL);
	}

	while (name[a] != '\0')
	{
		new_dog_1->name[a] = name[a];
		a++;
	}
	new_dog_1->name[a] = '\0';

	while (owner[b] != '\0')
	{
		new_dog_1->owner[b] = owner[b];
		b++;
	}
	new_dog_1->owner[b] = '\0';

	new_dog_1->age = age;

	return (new_dog_1);
}
