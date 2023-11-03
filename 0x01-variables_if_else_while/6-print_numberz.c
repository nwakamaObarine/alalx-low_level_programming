#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int Numberz;

	for (Numberz = 0; Numberz <= 9; Numberz++)
	{
		putchar(Numberz + '0');
	}
	putchar('\n');
	return (0);
}
