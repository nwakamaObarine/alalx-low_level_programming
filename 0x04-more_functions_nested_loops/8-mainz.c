#include <stdio.h>
/**
 * main - Returns all the integers
 *
 * Return: 0
 */
int main(void)
{
	char c, *p;

	p = &c;
	c = 'H';

	printf("The value of 'c': %d (%c)\n", c, c);
	printf("The address of 'c': %p\n", &c);
	printf("Value of 'p': %p\n", p);
	printf("Address of 'p': %p\n", &p);
	printf("Before calling function\n");
	modif_my_char_var(p, c);
	return (0);
}
