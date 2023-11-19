#include "main.h"
/**
 * _isupper - checks for uppercase letter and returns 1 if it
 *  and 0 if it is not
 *@c: parameter that is use to check the uppercase or lowercase
 *
 * Return: 0
 */

int _isupper(int c)
{

	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
