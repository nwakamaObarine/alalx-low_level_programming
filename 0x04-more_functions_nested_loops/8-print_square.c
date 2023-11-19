#include "main.h"

/**
 * print_square - prints the square of any character
 * @size: number of times square is to be printed
 *
 *Return: 0
 */
void print_square(int size)
{
	int num, zee;

	if (size > 0)
	{
		for (num = 1; num <= size; num++)
		{
			for (zee = 1; zee <= size; zee++)
			{
				if (zee == num)
				{
					_putchar('#');
				}
				else
				{
					_putchar('#');
				}
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
