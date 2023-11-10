#include "main.h"

/**
 * print_alphabet_x10 - prints lower case alphabet 10 times using loop
 *
 * Return: 0
 */

void print_alphabet_x10(void)
{
	char  LowerLetter;
	int NumberOfTimes;

	for (NumberOfTimes = 1; NumberOfTimes <= 10; NumberOfTimes++)
	{
		for (LowerLetter = 'a'; LowerLetter <= 'z'; LowerLetter++)
		{
			_putchar(LowerLetter);
		}
		_putchar('\n');
	}
}
