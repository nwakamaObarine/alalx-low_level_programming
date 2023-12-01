#include <stdio.h>
#include "main.h"
/**
 * main - checks the code
 *
 *
 * Return: always 0
 */
int main(void)
{
	char *str;
	int len;

	str = "my first strlen!";
	len = _strlen(str);
	printf("%d\n", len);
	return (0);
}
