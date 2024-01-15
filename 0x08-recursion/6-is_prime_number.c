#include "main.h"
/**
 * arine_funz - determines if n is a prime number
 * and returns  and 0 if it is not
 * arine_funz - checks the code
 * @a:  acts as n
 * @b: acts well
 *
 * Return: 0
 */
int arine_funz(int a, int b)
{

	if (a <= 0)
	{
		return (0);
	}
	else if (a == 2)
	{
		return (1);
	}
	else if (a % b == 0)
	{
		return (0);
	}
	else if (a == 1)
	{
		return (0);
	}
	else if (b >= a / 2)
	{
		return (1);
	}
	else
	{
		return (arine_funz(a, b + 1));
	}
	return (0);
}
/**
 * is_prime_number - calss arine_funz to check the sqrt of n
 * @n: interger whose sqrt is checked
 *
 * Return: 0
 */
int is_prime_number(int n)
{
	return (arine_funz(n, 2));
	return (0);
}
