#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 * main - returns the name of the progra when compiled
 * @argc: counts the number of command line arguement passed
 * @argv: characters to pointer
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int myname;

	while (myname < argc)
	{
		myname++;
		printf("%s\n", argv[0]);
	}
	return (0);
}
