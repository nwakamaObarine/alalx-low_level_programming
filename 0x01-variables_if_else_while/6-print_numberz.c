#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char Numberz;

	for (Numberz = '0'; Numberz <= '9'; Numberz++)
	{
		putchar(Numberz);
	}
	putchar('\n');
	return (0);
}
