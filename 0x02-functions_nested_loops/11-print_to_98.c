#include <stdio.h>
#include "main.h"

/**
 * print_to_98 - prints all number to 98 in sacending and descending order
 * @n: interger to be prints
 *
 * Return: 0
 */
void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}

	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}
