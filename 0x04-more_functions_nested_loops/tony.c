#include <stdio.h>

int main(void)
{
	int n = 142, m;

	for (m = 2; n > 1; m++)
	{
		while (n % m == 0)
		{ 
			printf("%d ", m);
			n = (n / 2);
		}
	}
	return (0);
}
