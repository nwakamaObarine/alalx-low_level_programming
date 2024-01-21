#include <stdio.h>
#include <stdlib.h>
#include <strings.h>
/**
 * myAtoi - converts numerical strings to integer
 * @arine: string to convert
 *
 * Return: 0
 */
int myAtoi(char *arine)
{
	int Result = 0;
	int counter = 0;
	int Signmultiplier = 1;

	if (arine[counter] == '-')
	{
		Signmultiplier = -1;
		counter++;
	}
	for (; arine[counter] != '\0'; counter++)
	{
		Result = Result * 10 + arine[counter] - '0';
	}
	return (Signmultiplier * Result);
}
/**
 * main - multiplies the command lines values passed
 * @argc: counts the values passed
 * @argv: command line values passed
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int FirstValue;
	int SecondValue;
	int Result;

	if (argc < 3)
	{
		printf("Error\n");
	}
	else
	{
		FirstValue = myAtoi(argv[1]);
		SecondValue = myAtoi(argv[2]);
		Result = FirstValue * SecondValue;
		printf("%d\n", Result);
	}
	return (0);
}

