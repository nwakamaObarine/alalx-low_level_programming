#include <stdlib.h>
#include <stdio.h>
#include <time.h>

int main(void)
{
	char list[] = "abcdefghijklmnopqrstuvwxyz1234567890ABCDEFGHIJKLMNOPQRSTUVWXYZ!@#$%^&*()_+";
	int num;

	srand((unsigned int)(time(NULL)));
	for (num = 0; num <= 15; num++)
		printf("%c", list[rand() % sizeof(list - 1)]);
	printf("\n");
	return (0);
}
