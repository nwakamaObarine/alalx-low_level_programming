#include "main.h"

/**
 * _isalpha - prints 0 is character is an alphabet and 1 if it is not
 * @c: paramater to check
 *
 *Return: Always 0
 */

int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
	     (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
