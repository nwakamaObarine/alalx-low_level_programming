#include <stdio.h>
#include <strings.h>
#include <stdlib.h>
int main(int argc[5], char *argv[])
{
	int count = 0;

	printf("this program uses %s to compile\n",argv[0]);
	while (count < argc)
	{
		printf("argc[%d] = %s\n", count, argv[count]);
		count++;
	}
	if (count > argc)
	{
		printf("Error");
	}
}
