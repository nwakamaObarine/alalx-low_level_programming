#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 * main - prints all argument passed
 * @argc: counts the command line argements passed
 * @argv: the command line arguements
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int count = 0;

	while (count < argc)
	{
		printf("%s\n", argv[count]);
		count++;
	}
	return (0);
}
