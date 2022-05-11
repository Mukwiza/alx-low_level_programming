#include "dog.h"
#include <stdio.h>

/**
 * print_dog - function that prints a struct dog
 * @d: variable of structure
 * @name: element of variable
 * Return: 0
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d -> name == NULL)
			printf("Name: (nil)\n");
		else
			printf("Name: %s\n", d -> name);
		if (d -> Age == NULL)
			printf("Age: (nil)\n");
		else
			printf("Age: %d\n", d -> Age);
		if (d -> owner == NULL)
                        printf("owner: (nil)\n");
                else
                        printf("owner: %s\n", d -> owner);
	}
}
