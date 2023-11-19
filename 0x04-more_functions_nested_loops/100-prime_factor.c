#include <stdio.h>
/**
 * main - prints the largest prime factor of a number
 *
 * Return: 0
 */
int main(void)
{
	long num = 612852475143;
	int count;

	while (num % 2 == 0)
	{
		num = num / 2;
	}
	for (count = 3; count * count <= num; count = count + 2)
	{
		while (num % count == 0)
		{
			num = num / count;
		}
	}
	if (num > 2)
	{
		printf("%ld\n", num);
	}
	return (0);
}
