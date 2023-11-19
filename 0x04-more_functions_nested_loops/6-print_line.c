#include "main.h"

/**
 * print_line - prints line n times
 * @n: the number of times the line is printed
 *
 * Return: 0
 */

void print_line(int n)
{
	int num;

	for (num = 0; num <= n; num++)
	{
		if (n <= 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('_');
		}
	}
	_putchar('\n');
}
