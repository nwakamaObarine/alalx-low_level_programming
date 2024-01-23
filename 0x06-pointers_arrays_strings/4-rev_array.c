#include "main.h"
#include <stdio.h>
/**
 * reverse_array - reverses the numbers in an array
 * @a: array to reverse
 * @n: number of elements to switch
 *
 * Return: 0
 */
void reverse_array(int *a, int n)
{
	int Length2, b;

	for (Length2 = n - 1; Length2 >= 1 ; Length2--)
	{
		b = a[Length2];
		a[Length2] = b;
	}
}
