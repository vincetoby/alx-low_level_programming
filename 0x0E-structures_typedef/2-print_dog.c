#include "dog.h"
#include <stdio.h>

/**
 * print_dog - prints struct dog
 * @d: pointer to struct dog
 * Return: void
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		printf("Name: %s\n", (d->name) ? d->name : "(nil)");
		/* If d->name is equal to null, it prints d->name */
		/* else it prints (nil) */
		printf("Age: %f\n", (d->age) ? d->age : 0);
		printf("Owner: %s\n", (d->owner) ? d->owner : "(nil)");
		/* use 0 instead of (nil) for integers and float */
	}
}
