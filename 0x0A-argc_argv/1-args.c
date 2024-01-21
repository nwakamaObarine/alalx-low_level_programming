#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 * main - returns the number of argc
 *@argc: counts the number of comand line arguement passed
 *@argv: the strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;
	(void)*argv;

	if (argc == 1)
		printf("%d\n", count);
	else
		printf("%d\n", argc - 1);
	return (0);
}
