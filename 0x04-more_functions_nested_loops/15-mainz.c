#include <stdio.h>
/**
 * main - prints the valuea and address of arrays and pointers
 *
 * Return: 0
 */
int main(void)
{
	int a[5];
	int *p2;
	int *p;

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = -498;

	printf("The value and address of a[0] are: %d & %p respectively\n", *a, &(*(a)));
	printf("The value and address of a[1] are: %d & %p respectively\n", *(a + 1), &(*(a + 1)));
	printf("The value and address of a[2] are: %d & %p respectively\n", *(a + 2), &(*(a + 2)));
	printf("The value and address of a[3] are: %d & %p respectively\n", *(a + 3), &(*(a + 3)));
	printf("The value and address of a[4] are: %d & %p espectively\n", *(a + 4), &(*(a + 4)));
	printf("The value and address of 'p': %p & %p\n", p, &p);
	printf("The value and address of 'p2':%p & %p\n", p2, &p2);
	printf("\nRedirecting pointers\n");
	p = a + 1;
	p2 = a + 3;
	printf("The new values and address of 'p': %d & %p & %p\n", *p, p, &p);
	printf("The new values and address of 'p2': %d & %p & %p\n", *p2, p2, &p2);
	printf("\nRedirecting p2\n");
	*p2 = *p + 1337;
	printf("The new value and address of 'p2': %d & %p %p\n", *p2, p2, &p2);
	return (0);
}
