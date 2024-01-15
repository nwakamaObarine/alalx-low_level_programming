#include "main.h"
#include <stdio.h>
/**
 * puts_recursion - prints strings using recursion
 * @s: string to be displayed using recursion
 *
 * Return: 0
 */
void _puts_recursion(char *s)
{
	int a = 0;

	while (a != '\0')
	{
		a++;
	}
	if (*s != '\0')
	{
/*		if (*s != '\n') */
		{
			puts(s - a);
			_puts_recursion(s - 1);
		}
		return;
	}
}
