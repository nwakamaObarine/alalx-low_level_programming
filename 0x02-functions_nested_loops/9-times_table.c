#include "main.h"
/**
 * times_table- prints times table
 *
 * Return: 0
 */

void times_table(void)
{
	int Number, Multiplier, Product;

	for (Number = 0; Number <= 9; Number++)
	{
		_putchar('0');
		for (Multiplier = 1; Multiplier <= 9; Multiplier++)
		{
			_putchar(',');
			_putchar(' ');

			Product = Multiplier * Number;
			if (Product <= 9)
				_putchar(' ');
			else
				_putchar((Product / 10) + '0');
			_putchar((Product % 10) + '0');
		}
		_putchar('\n');
	}
}
