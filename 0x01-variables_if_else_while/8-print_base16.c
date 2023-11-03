#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: 0(success)
 */

int main(void)
{
	char Alpha, Numz;

	for (Numz = '0'; Numz <= '9'; Numz++)
	{
		putchar(Numz);
	}
	for (Alpha = 'a'; Alpha <= 'f'; Alpha++)
	{
		putchar(Alpha);
	}
	putchar('\n');
	return (0);
}
