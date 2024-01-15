#include "main.h"
/**
 * arine_func - acts as a tail function to return sqrt
 * @a: First integer
 * @b: second integer
 *
 * Return: 0
 */
int arine_func(int b, int a)
{
	if (a * a > b || b < 0)
	{
		return (-1);
	}
	else if (a * a == b)
	{
		return (a);
	}
	else
	{
		return (arine_func(b, a + 1));
	}
	return (0);
}

/**
 * _sqrt_recursion - returns the square root of n
 * @n: interger which sqrt is returned
 *
 * Return: 0
 */
int _sqrt_recursion(int n)
{
	return (arine_func(n, 0));
	return (0);
}
