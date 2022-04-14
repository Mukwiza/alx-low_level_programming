#include "main.h"

/**
 * more_numbers - prints 10 times the numbers, from 0 t0 14
 * Return: 0
 */
void more_numbers(void)
{
	int c, x;

	for (c = 0; c < 10; c++)
	{
		for (x = 0; x <= 14; x++)
		{
			if (x > 9)
			{
				_putchar((x / 10) + 48);
			}
			_putchar((x % 10) + 48);
		}
		_putchar(10);
	}
}
