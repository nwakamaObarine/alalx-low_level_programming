#include <stdio.h>
/**
 * main - prints the size, value and address of the array
 *
 * Return: 0
 */
int main(void)
{
	int array[20];
	char stan[2];

	printf("size of array: %lu\n", sizeof(array));
	printf("Size of stan: %lu\n", sizeof(stan));
	printf("size of &array[0]: %lu\n", sizeof(&array[0]));
	printf("size of &stan[0]: %lu\n", sizeof&(stan[0]));
	printf("array: %p\n", array);
	printf("&array[0]: %p\n", &(array[0]));
	printf("stan: %p\n", stan);
	printf("&stan[0]: %p\n", &(stan[0]));
	return (0);
}
