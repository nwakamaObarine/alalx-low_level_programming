#include "main.h"
/**
 * swap_int - swaps a poniter a to pointer b and vice versa
 * @a: first pointer
 * @b: second pointer
 *
 * Return: 0
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
