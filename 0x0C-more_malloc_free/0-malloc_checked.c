#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * malloc_checked - Entry point
 *@b: size of the memory to be allocated
 * Return: p
 */

void *malloc_checked(unsigned int b)
{
	int *p;

	p = (int *)malloc(b * sizeof(unsigned int));

	if (p == NULL)
	{
		exit(98);
		return (NULL);
	}
	return (p);
}
