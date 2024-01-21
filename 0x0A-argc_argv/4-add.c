#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 * main - checks code
 * @argc: counts the number of command line arguements passed
 * @argv: coomand line string array
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{

	long int TotalSum = 0;
	long int FirstSum;
	char *endptr;
	int i = 1;

	if (argc > 1)
		for (; argv[i]; i++)
		{
			FirstSum = strtol(argv[i], &endptr, 10);
			if (!*endptr)
			{
				TotalSum = TotalSum + FirstSum;
			}
			else
			{
				printf("Error\n");
				return (1);
			}
		}
	printf("%ld\n", TotalSum);
	return (0);
}
