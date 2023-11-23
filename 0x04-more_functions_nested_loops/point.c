#include <stdio.h>
/**
 * main - prints the address of the int & pointer
 *
 * Return: 0
 */
int main(void)
{
	int n;
	n = 100;
	int *m;

	m = &n;

	printf("Value of 'n': %d\n", n);
	printf("Address of integer 'n': %p\n", &n);
	printf("Address pointer 'm': %p\n", m);
	printf("Value of 'm': %d\n", *m);
	*m = 140;
	printf("Value of 'n': %d\n", n);
}
