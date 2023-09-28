#include "dog.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * new_dog - creates a new dog
 * @name: name of new dog
 * @age: age of new dog
 * @owner: owner of new dog
 * Return: pointer to new dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;
	int len1, len2;

	len1 = strlen(name);
	len2 = strlen(owner);
/* strlen gets the length of a string */
	d = malloc(sizeof(dog_t));
	if (d == NULL)
	{
		return (NULL);
	}

	d->name = malloc(sizeof(char) * len1 + 1);
	if (d->name == NULL)
	{
		free(d);
		return (NULL);
	}
	d->owner = malloc(sizeof(char) * len2 + 1);
	if (d->owner == NULL)
	{
		free(d);
		free(d->name);
		return (NULL);
	}
	strcpy(d->name, name);
	strcpy(d->owner, owner);
	/* strcpy copies a string */
	d->age = age;
	return (d);
}
