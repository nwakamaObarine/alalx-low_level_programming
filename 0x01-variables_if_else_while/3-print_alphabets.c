#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * main - Entry point
 *
 * Return: ALways 0(success)
 */

int main(void)
{
	char LowerLetter = 'a', UpperLetter = 'A';

	while (LowerLetter <= 'z')
	{
		putchar(LowerLetter);
		LowerLetter += 1;
	}
	while (UpperLetter <= 'Z')
	{
		putchar(UpperLetter);
		UpperLetter += 1;
	}
	putchar('\n');
	return (0);
}
