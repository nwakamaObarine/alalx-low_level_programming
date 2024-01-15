#include "main.h"
/**
 * factorial - returns the factorial of n
 * @n: number of times a factorialwill be returned
 *
 * Return: 0
 */
int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
	return (0);
}
