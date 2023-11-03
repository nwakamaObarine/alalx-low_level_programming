#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */

int main(void)
{
	char LowerLetter = 'a';

	while (LowerLetter != 'z')
	{
		putchar(LowerLetter);
		LowerLetter += 1;
	}
	putchar('\n');
	return (0);
}
