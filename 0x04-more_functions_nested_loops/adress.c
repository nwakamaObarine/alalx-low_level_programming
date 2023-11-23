#include <stdio.h>
/**
 * main - prints the storage address ofor variables
 *
 * Return: 0
 */

int main(void)
{
	int n;
	int *m;
	n = 80;
	m = &n;
	char c;

	printf("Address of variable 'n': %p\n", &n);
	printf("Address of variable 'p': %p\n", &c);
	printf("Address of variable 'm': %p\n", m);
	printf("Size of integer on computer: %lu bytes\n", sizeof(int));
	printf("size of variabe c: %lu bytes\n", sizeof(char));
}
