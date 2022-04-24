#include "main.h"

/**
 * *_strncpy - function that copies a string
 * @dest: string
 * @src: string
 * @n: number of indexes
 * Return: 0
 */

char *_strncpy(char *dest, char *src, int n)
{
	for (n = 0 ; dest[n] != '\0' ; n++)
	{
		src[n] = dest[n];
	}
	return (0);
}
