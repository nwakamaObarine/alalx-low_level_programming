#include "main.h"
#include <stdio.h>
/**
 * print_array - prints elenments of an integer of arrays
 * @a: array of integers
 * @n: number of elements in array
 *
 * Return: 0
 */
void print_array(int *a, int n)
{
	int num = 0; 

	for (n--; n >= 0; n--,  num++)
	{
		printf("%d", a[num]);
		if (n > 0)
		{
			printf(", ");
		}

	}
	printf("\n");
}
