#include "main.h"
/**
 * _pow_recursion - Multipies x by itself by  y times
 * @x: number that multiplies itself by y times
 * @y: number of times that x multipkies itself
 *
 * Return: 0
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, (y - 1)));
	}
	return (0);
}
