#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int Number1, Number2, Number3;

	for (Number1 = 0; Number1 <= 9; Number1++)
	{
		for (Number2 = Number1 + 1; Number2 <= 9; Number2++)
		{
			for (Number3 = Number2 + 1; Number3 <= 9; Number3++)
			{
				putchar(Number1 + '0');
				putchar(Number2 + '0');
				putchar(Number3 + '0');
				if (Number1 == 7 && Number2 == 8 && Number3 == 9)
					continue;
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
