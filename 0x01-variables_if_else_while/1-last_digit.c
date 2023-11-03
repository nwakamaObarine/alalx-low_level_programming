#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */

int main(void)
{
	int n, Num;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	Num = n % 10;
	if (Num > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, Num);
	if (Num == 0)
		printf("Last digit of %d is %d and is 0\n", n, Num);
	if (Num < 6 && Num != 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, Num);
	return (0);
}
