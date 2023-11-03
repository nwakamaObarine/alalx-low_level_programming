#include <stdio.h>
#include <stdlib.h>
#include <strings.h>

/**
 * main - Entry point
 *
 * Return: 0 (success)
 */

int main(void)
{
	char arine;

	for (arine = 'z'; arine >=  'a'; arine--)
	{
		putchar(arine);
	}
	putchar('\n');
	return (0);
}
