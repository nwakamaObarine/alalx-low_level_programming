#include "main.h"
/**
 * _puts - prints string to stdout
 * @str: string pointer to be printed
 *
 * return: 0
 */
void _puts(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		_putchar(str[num]);
	}
	_putchar('\n');
}
