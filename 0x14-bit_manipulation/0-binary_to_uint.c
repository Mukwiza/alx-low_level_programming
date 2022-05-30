/*
 * File: 0-binary_to_uint.c
 * Auth: Ishimwe Tresor
 */

#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer pointing to a string of 0 and 1 chars
 * Return: the converted number or 0 if
 *         .there is one or more chars in the string b that is not 0 or 1
 *         .b is NULL
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, len, base = 1;

	if (*b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len++)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		decimal = decimal + (b[len] - '0') * base;
		base = base * 2;
	}

	return (decimal);
}

