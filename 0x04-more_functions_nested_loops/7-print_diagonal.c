#include "main.h"

/**
 * print_diagonal - prints character diagonally
 * @n: number of diagonals to be printed
 *
 * Return: 0
 */
void print_diagonal(int n)
{
	int num, zee;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (num = 1; num <= n; num++)
		{
			for (zee = 1; zee <= n; zee++)
			{
				if (zee == num)
				{
				_putchar('\\');
				}
				else if (zee < num)
				{
					_putchar(' ');
				}


			}
			_putchar('\n');
		}
	_putchar('\n');
	}
}
