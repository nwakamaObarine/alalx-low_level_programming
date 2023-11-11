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
	char LowerLetter;

	for (LowerLetter = 'a'; LowerLetter <= 'z'; LowerLetter++)
	{
		putchar(LowerLetter);
	}
	putchar('\n');
	return (0);
}
