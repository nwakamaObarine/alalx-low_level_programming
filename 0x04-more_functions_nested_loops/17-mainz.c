#include <stdio.h>
/**
 * main - creates an array of a string and prints it
 *
 * Return:0
 */
int main(void)
{
	char a[7] = "school";

	printf("%s\n", a);
	printf("Value of the last char of a: %d\n", a[6]);
	printf("character of the secoond to last cahracter of a: %c\n", a[3]);
	printf("Value of a: %p\n", a);
	printf("Value of \"school\": %p\n", "school");
	return (0);
}
