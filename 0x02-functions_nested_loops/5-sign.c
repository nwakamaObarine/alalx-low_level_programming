#include "main.h"
/**
 * print_sign - Prints + and returns 1 if n is greater than 0,prints - and
 * returns -1 if n is less than 0, prints 0 and returns 0 if n is 0
 * @n: parameter that rturns values
 *
 * Return: 0
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
	return (0);
}
