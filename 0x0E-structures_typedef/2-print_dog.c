#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: variable of structure
 *
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != 0)
	{
		if (d->name == 0)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d->name);
		printf("Age: %f\n", d->age);
		if (d->owner == 0)
			printf("owner: (nil)\n");
		else
			printf("owner: %s\n", d->owner);
	}
}
