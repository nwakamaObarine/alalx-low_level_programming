#include "main.h"
/**
 * print_times_table - prints times table of n
 * @n: number at which time tables begin
 *
 * Return: 0
 */
void print_times_table(int n)
{
	int Mult, Product, Number;

	if (n <= 15 && n >= 0)
	{
		for (Number = 0; Number <= n; Number++)
		{
			_putchar('0');
			for (Mult = 1; Mult <= n; Mult++)
			{
				_putchar(',');
				_putchar(' ');

				Product = Number * Mult;

				if (Product <= 9)
				{
					_putchar(' ');
				}
				if (Product <= 99)
				{
					_putchar(' ');
				}

				if (Product >= 100)
				{
					_putchar((Product / 100) + '0');
					_putchar(((Product / 10) % 10) + '0');
				}
				else if (Product <= 100 && Product >= 10)
					_putchar((Product / 10) + '0');
				_putchar((Product % 10) + '0');

			}
			_putchar('\n');
		}
	}
}
