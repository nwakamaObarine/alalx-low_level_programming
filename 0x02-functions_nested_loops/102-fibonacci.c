#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: 0
 */

int main(void)
{
	int count = 3;
	long int First = 1, Second = 2, next = First + Second;

	printf("%lu, ", First);
	printf("%lu, ", Second);

	while (count <= 50)
	{
		if (count == 50)
		{
			printf("%lu\n ", next);
		}
		else
		{
			printf("%lu, ", next);
		}
	First = Second;
	Second = next;
	next = First + Second;
	count++;
	}
	return (0);
}
