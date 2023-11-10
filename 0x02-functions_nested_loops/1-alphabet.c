#include "main.h"

/**
 *print_alphabet - prints lowercase alphabet followed by a new line
 *
 * Return: Always 0
 */

void print_alphabet(void)
{
	char LowerLetter;

	for (LowerLetter = 'a'; LowerLetter <= 'z'; LowerLetter++)
	{
		_putchar(LowerLetter);
	}
	_putchar('\n');
}
