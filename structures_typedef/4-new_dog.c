#include <stdlib.h>
#include "dog.h"

/**
 * _strlen - calculates the length of a string
 * @s: string to measure
 *
 * Return: length of the string
 */
static size_t _strlen(char *s)
{
	size_t len = 0;

	if (!s)
		return (0);

	while (s[len])
		len++;
	return (len);
}

/**
 * _strcpy - copies a string from src to dest
 * @dest: destination buffer
 * @src: source string
 *
 * Return: void
 */
static void _strcpy(char *dest, char *src)
{
	size_t i = 0;

	if (!dest || !src)
		return;

	while (src[i])
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
}

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
		d->name = malloc(_strlen(name) + 1);
		if (!d->name)
		{
			free(d);
			return (NULL);
		}
		_strcpy(d->name, name);
	}
	else
		d->name = NULL;

	/* Copy owner */
	if (owner)
	{
		d->owner = malloc(_strlen(owner) + 1);
		if (!d->owner)
		{
			free(d->name);
			free(d);
			return (NULL);
		}
		_strcpy(d->owner, owner);
	}
	else
		d->owner = NULL;

	d->age = age;

	return (d);
}
