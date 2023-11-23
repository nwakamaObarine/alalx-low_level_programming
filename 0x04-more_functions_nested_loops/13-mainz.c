#include <stdio.h>
/**
 * main - illustrates pointer  aritmetic
 *
 * Return: 0
 */
int main(void)
{
	int a[5];

	*a = 98;
	*(a + 1) = 198;
	*(a + 2) = 298;
	*(a + 3) = 398;
	*(a + 4) = 498;

	printf("Value of a[0]: %d\n", *a);
	printf("value of a[1]: %d\n", *(a + 1));
	printf("Value of a[2]: %d\n", *(a + 2));
	printf("Value of a[3]: %d\n", *(a + 3));
	printf("Value of a[4]: %d\n", *(a + 4));
	printf("-------------------------\n");
	printf("The value of a(also address for &a[0]): %p\n", &(*(a)));
	printf("The address of a[1]: %p\n", &(*(a + 1)));
	printf("Address of a[1]: %p\n", (a + 1));
	printf("Value for a: %p\n", a);
	return(0);
}
