#include "main.h"

/**
 * *_memcpy - function that copies memory area
 * @n: number of bytes
 * @dest: pointer
 * @src: pointer
 * Return: dest string
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;

	for (i = 0 ; i != n ; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
