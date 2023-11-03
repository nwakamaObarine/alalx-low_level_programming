#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char LowerLetter;

	for (LowerLetter = 'a'; LowerLetter <= 'z'; LowerLetter++)
	{
		if (LowerLetter != 'e' && LowerLetter != 'e')
			putchar(LowerLetter);
	}
	putchar('\n');
	return (0);
}
