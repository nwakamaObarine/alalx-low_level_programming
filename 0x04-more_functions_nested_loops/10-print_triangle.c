#include "main.h"

/**
 * print_triangle - prints the triangle of any character
 * @size: number of times square is to be printed
 *
 *Return: 0
 */
void print_triangle(int size)
{
	int num, zee;

	if (size > 0)
	{
		for (num = 1; num <= size; num++)
		{
			for (zee = num; zee <= size; zee++)
			{
				_putchar(' ');
			}
			for (zee = 1; zee <= num; zee++)
			{
				_putchar('#');
			}
		_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
