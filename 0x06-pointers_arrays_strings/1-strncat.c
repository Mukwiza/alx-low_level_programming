#include "main.h"

/**
 **_strncat - function that concatinate  strings
 *@n: number of bytes src string has
 *@dest: pointer
 *@src: pointer
 *Return: pointer to dest string
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, length;

	for (length = 0 ; dest[length] != '\0' ; length++)
	{
	}
	for (i = 0 ; i < n ; i++)
	{
		dest[length + i] = src[i];
	}
	return (dest);
}
