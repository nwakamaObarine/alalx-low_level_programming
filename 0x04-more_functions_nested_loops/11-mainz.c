#include <stdio.h>
/**
 * main - illustrates array decay
 *
 * Return: 0
 */
int main(void)
{
	int *p;
	int t[10];

	p = t;
	printf("t: %p\n", p);
	printf("&t[0]: %p\n", &(t[0]));
	printf("p: %p\n", p);
	f(t);
	return (0);
}
