#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "dog.h"

/**
 * new_dog - creates a new dog
 * @name: dog's name
 * @age: dog's age
 * @owner: dog's owner
 *
 * Return: pointer to new dog, or NULL if it fails
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (!d)
		return (NULL);

	/* Copy name */
	if (name)
	{
		d->name = malloc(strlen(name) + 1);  /* +1 for '\0' */
		if (!d->name)
		{
			free(d);
			return (NULL);
		}
		strcpy(d->name, name);
	}
	else
		d->name = NULL;

	/* Copy owner */
	if (owner)
	{
		d->owner = malloc(strlen(owner) + 1);
		if (!d->owner)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		strcpy(d->owner, owner);
	}
	else
		d->owner = NULL;

	d->age = age;
	return (d);
}

