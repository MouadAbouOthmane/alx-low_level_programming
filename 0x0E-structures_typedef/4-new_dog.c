#include "dog.h"
#include "stdlib.h"
#include "string.h"

/**
 * new_dog - function that creates a new dog.
 *
 * @name: name of dog.
 * @age: age of dog.
 * @owner: owner of dog.
 *
 * Return: an pointer of struct dog, null if function fail.
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	if (!name || age < 0 || !owner)
	{
		return (0);
	}

	d = malloc(sizeof(dog_t));
	if (!d)
	{
		return (0);
	}

	d->name = malloc(sizeof(char) * (strlen(name) + 1));
	if (!d->name)
	{
		free(d);
		return (0);
	}

	d->owner = malloc(sizeof(char) * (strlen(owner) + 1));
	if (!d->owner)
	{
		free(d);
		free(d->name);
		return (0);
	}

	d->name = strcpy(d->name, name);
	d->age = age;
	d->owner = owner;

	return (d);
}
