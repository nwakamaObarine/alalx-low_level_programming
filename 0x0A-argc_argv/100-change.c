#include <stdio.h>
#include <stdlib.h>
/**
 * main - cents to coin change
 * @argc: counts the commndline arguements
 * @argv: commandline arrays
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int cents, quartz, dimes, twz, onz, nikz, Result;

	if (argc < 2 || argc > 2)
	{
		printf("Error\n");
		return (1);
	}
	cents = atoi(argv[1]);
	if (cents < 0)
	{
		printf("0\n");
	}
	quartz = cents / 25;
	cents = cents % 25;
	dimes = cents / 10;
	cents = cents % 10;
	nikz = cents / 5;
	cents = cents % 5;
	twz = cents / 2;
	cents = cents % 2;
	onz = cents;
	Result = quartz + dimes + nikz + twz + onz;
	printf("%d\n", Result);
	return (0);
}
