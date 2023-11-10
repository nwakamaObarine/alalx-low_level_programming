#include <stdio.h>

/**
 * main - entry point
 *
 * Return: 0
 */

int main(void)
{
	int count = 3;
	long int First = 1, Second = 2, Next = First + Second, Total = 0;

	while(1)
	{
		Next = First + Second;

		if (Next > 4000000)
		{
			break;
		}
		if (Next % 2 == 0)
		{
			Total += Next;
		}
		First = Second;
		Second = Next;
	}
	printf("%lu\n", Total);
//	printf("\n%lu\n", Next);
}
