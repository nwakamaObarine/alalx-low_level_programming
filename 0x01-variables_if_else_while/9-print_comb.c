#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	char LowerLetter = '1';

	while (LowerLetter <= '9')
	{
		putchar(LowerLetter);
		if (LowerLetter < '9')
		{
		putchar(',');
		putchar(' ');
		}
		LowerLetter++;
	}
	putchar('\n');
	return (0);
}

