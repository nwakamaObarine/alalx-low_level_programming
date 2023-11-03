#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int LowerLetter = 0;

	while (LowerLetter <= 9)
	{
		putchar(LowerLetter + '0');
		if (LowerLetter < 9)
		{
		putchar(',');
		putchar(' ');
		}
		LowerLetter++;
	}
	putchar('\n');
	return (0);
}

