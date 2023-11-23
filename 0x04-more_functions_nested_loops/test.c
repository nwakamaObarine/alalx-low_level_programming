#include <stdio.h>
/**
 * main - deferences a variable using a pointer
 *
 * Return: 0
 */
int main(void)
{
	int n = 98, *p;
	char c = 'H', *pp;

	p = &n;
	pp = &c;

	//Printing the size of each variable
	printf("size of variable 'n': %lu\n", sizeof(n));
	printf("Size of variable 'c': %lu\n", sizeof(c));
	printf("Size of point 'p': %lu\n", sizeof(p));
	printf("Size of pointer 'pp': %lu\n", sizeof(pp));

	//printing the address of each variable
	printf("\nAddress of variable 'n': %p\n", &n);
	printf("Address of variable 'c': %p\n", &c);
	printf("Address of variable 'pp': %p\n", pp);
	printf("Address of variable 'p': %p\n", p);

	//printing the values of each variable before dereferencing
	printf("\nThe value of variable 'n': %d (%c)\n", n, n);
	printf("The value of variable 'c': %d (%c)\n)", c, c);
	printf("The value of the pointer 'pp': %d (%c)\n", *pp, *pp);
	printf("The value of the pointer 'p': %d\n", *p);

	//Dereferencing the value of n and c using pointer and then printing
	*pp = 'o';
	*p = 402;
	printf("\nNew value of variable 'n' :%d\n", n);
	printf("New values of variable 'c': %d (%c)\n", c,c);
	printf("New value of pointer 'p': %d\n", *p);
	printf("New values of pointer 'pp': %d (%c)\n", *pp, *pp);

	int a;
	for (a = 65; a <= 122; a++)
	{
		printf("\n%d : %c\n", a, a);
//		putchar(a + '0');
	}
}
