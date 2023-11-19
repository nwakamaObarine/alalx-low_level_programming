#include "main.h"

/**
 * more_numbers - prints numbers ranging from 0 - 14
 *
 * Return: 0
 */
void more_numbers(void)
{
	int n, m;

	for (m = 1; m <= 10; m++)
	{
		for (n = 0; n <= 14; n++)
		{
			if (n > 9)
				_putchar((n / 10) + '0');

			_putchar((n % 10) + '0');
		}
		_putchar('\n');
	}
}
