#include "dog.h"
#include <stdio.h>

/**
 * init_dog - initializes struct
 * @d: pointer to variable of struct dog datatype
 * @name: variable  of char datatype
 * @age: variable of float datatype
 * @owner: variable of char datatpe
 * Return: void
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d != NULL)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
}
