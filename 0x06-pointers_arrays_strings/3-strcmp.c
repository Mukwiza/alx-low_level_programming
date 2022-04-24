#include "main.h"

/**
 * _strcmp - function that compares strings
 * @s1: first string to compare
 * @s2: second string to compare
 * Return: int
 */

int _strcmp(char *s1, char *s2)
{
	int i, flag = 0;

	for (i = 0 ; s1[i] != 0 || s2[i] ; i++)
	{
		if (s1[i] != s2[i])
		{
			flag = 1;
		}
	}
	return (flag);
}
