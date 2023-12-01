#include "main.h"
/**
 * puts2 - prints even character of a string
 *@str: charcter to print
 *
 * Return: 0
 */
void puts2(char *str)
{
	int num, nam = 0;

	for (num = 0; str[num] != '\0'; num++)
	{
		nam++;
		if (str[num] % 2 == 0)
			_putchar(str[num]);

	}
	_putchar('\n');
}
