#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: number of elements
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0 ; i < n ; i++)
	{
		src[i] = dest[i];
	}
	return (0);
}
