#include <stdio.h>

/**
 * main - enrtry point
 *
 * Return: 0
 */

int main(void)
{
	int a, i = 0;

	for (a = 0; a <= 1024; a++)
	{
		if (a % 3 == 0 || a % 5 == 0)
		{
			i += a;
		}
	}
	printf("%d\n", i);

	return (0);
}
