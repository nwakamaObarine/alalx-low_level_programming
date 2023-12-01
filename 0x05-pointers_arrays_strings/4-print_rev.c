#include "main.h"
/**
 * print_rev - prints a string in reversed order
 * @s: string to be printer
 *
 * Return: 0
 */
void print_rev(char *s)
{
	int num, nan = 0;

	for (num = 0; s[num] != '\0'; num++)
		nan++;
	for (num = nan - 1; num >= 0; num--)
		_putchar(s[num]);
	_putchar('\n');
}
