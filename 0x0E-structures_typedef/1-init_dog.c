#include "dog.h"

/**
 * init_dog - function that initialize a variable of type struct dog
 * @d: dog struct
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of the dog
 *
 * Return: Void
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
	int i = 0, j = 0;

	if (d == NULL)
		exit (1);

	while (name[i] != '\0')
	{
		d->name[i] = name[i];
		i++;
	}
	d->name[i] = '\0';
	d->name = name;

	d->age = age;

	while (owner[j] != '\0')
	{
		d->owner[j] = owner[j];
		j++;
	}
	d->owner[j] = '\0';
	d->owner = owner;
}
