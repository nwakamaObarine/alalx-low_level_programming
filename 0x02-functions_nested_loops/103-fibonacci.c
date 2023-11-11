#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	long int First = 0, Second = 1, Next = First + Second;
	float Total = 0;

	while (1)
	{
		Next = First + Second;

		if (Next > 4000000)

			break;

		if ((Next % 2) == 0)

			Total += Next;

		First = Second;
		Second = Next;
	}
	printf("%0.f\n", Total);

	return (0);
}
