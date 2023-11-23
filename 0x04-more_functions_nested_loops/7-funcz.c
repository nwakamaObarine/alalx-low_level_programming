#include <stdio.h>
/**
 * main - returns param
 *
 * Return: 0
 */

int main(void)
{
	int n = 98, *p;

	p = &n;

	printf("Value of 'n' before call: %d\n", n);
	printf("Addresss of 'n': %p\n", &n);
	printf("Value of p: %p\n", p);
	printf("Address of p: %p\n", p);
	modif_my_param(p);
	printf("Value of 'n' after the call: %d\n", n);
}
