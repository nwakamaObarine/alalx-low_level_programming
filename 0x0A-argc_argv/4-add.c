#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 * mystrtol - converts string s to long int and saves the error parts
 * @str: string tbe converted
 * @endptr: stores the error values from str
 * @base: range
 *
 * Return:0
 */
long int mystrtol(const char *str, char *endptr, int base)
{
	long int Result = 0;
	int sign = 1;
	int counter;

	for (counter = 0; str[counter] == ' ' || str[counter] == ',' ||
			(str[counter] >= 9 && str[counter] <= 13); counter++)
	{
		;
	}
	if (str[counter] == '-')
	{
		sign = -1;
		counter++;
	}
	else
	{
		sign = 1;
		counter++;
	}
	for (; str[counter] >= 0 && str[counter] <= 9; counter++)
	{
		Result = Result * base + str[counter] - '0';
	}
	if (endptr != NULL)
	{
		*endptr = (char *)str;
	}
	return (sign * Result);
	return (0);
}
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
