#include "main.h"
/**
 * puts_half - prints the half of a string
 * @str: string to be printed
 *
 * Return: 0
 */
void puts_half(char *str)
{
	int num;

	for (num = 0; str[num] != '\0'; num++)
	{
		if (str[num] >= '5')
			_putchar(str[num]);
	}
	_putchar('\n');
}
