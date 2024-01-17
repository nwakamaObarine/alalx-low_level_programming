#include "main.h"

/**
 * _abs - print positive number even when it recieves a negative
 *@n: data type to return
 *
 * Return: 0
 */

int _abs(int n)
{
	if (n < 0)
	{
		return (n = (-1) * n);
	}
	else
	{
		return (n);
	}
	return (0);
}
