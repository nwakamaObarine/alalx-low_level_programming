#include <stdio.h>
/**
 * main - pointer aritmethic
 *
 * Return: 0
 */
int main(void)
{
	int *p;
	int n;
	int a[2];

	p = &n;
	printf("p = &n\np: %p\n", p);
	printf("p + 1:%p\n", p + 1);
	printf("p + 2: %p\n", p + 2);
	printf("p + 10: %p\n", p + 10);
	p = a;
	printf("p = a:\np: %p\np + 1: %p\n", p, p + 1);
	return (0);
}
