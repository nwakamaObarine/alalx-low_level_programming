#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @n: integer parameter that stores the value
 *
 * Return: 0
 */

int print_last_digit(int n)
{
	int Last_digit = n % 10;

	if (n < 0)
		Last_digit *= -1;
	
	_putchar(Last_digit + '0');

	return (Last_digit);
}
