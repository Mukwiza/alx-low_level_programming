/*
 * File: 0-binary_to_uint.c
 * Auth: Ishimwe Tresor
 */

#include "main.h"

/**
 * binary_to_uint - function that converts a binary number to an unsigned int.
 * @b: pointer pointing to a string of 0 and 1 chars.
 *
 * Return: the converted number.
 *         if b is NULL or contains chars not 0 or 1 - 0.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int decimal = 0, base = 1;
	int len;

	if (b == '\0')
		return (0);

	for (len = 0; b[len];)
		len++;

	for (len -= 1; len >= 0; len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);

		decimal = decimal + (b[len] - '0') * base;
		base = base * 2;
	}

	return (decimal);
}

