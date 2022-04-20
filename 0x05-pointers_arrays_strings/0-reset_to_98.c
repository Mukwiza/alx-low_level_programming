#include "main.h"

/**
 * reset_to_98 - entry point
 * @n: the number to modify
 * return: 0
 */
void reset_to_98(int *n)
{
	int a = 2;

	n = &a;
	*n = 98;
}
