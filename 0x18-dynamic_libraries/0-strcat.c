#include "main.h"

/**
 **_strcat - function that concatinate two strings
 *@dest: pointer
 *@src: pointer
 *Return: pointer to  dest string
 */

char *_strcat(char *dest, char *src)
{
	int i, length;

	for (length = 0 ; dest[length] != '\0' ; length++)
	{
	}
	for (i = 0 ; src[i] ; i++)
	{
		dest[length + i] = src[i];
	}
	return (dest);
}
