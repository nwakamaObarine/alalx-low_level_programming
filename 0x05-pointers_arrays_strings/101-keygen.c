#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
/**
 * main - generates a random security key everytime it is runned
 *
 * Return: 0
 */
int main(void)
{
	int RandoMNumber, number;
	char letters[] = "abcdefghijklmnopqrstuvwxyz";
	char LETTER[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char Numbers[] = "0123456789";
	char Symbols[] = "!@#$%^&*()_+";
	char Password[15];

	srand((unsigned int)(time(NULL)));
	RandoMNumber = rand() % 4;

	for (number = 0; number <= 15; number++)
	{
		if (RandoMNumber == 1)
		{
			Password[number] = letters[rand() % sizeof(letters)];
			RandoMNumber = rand() % 4;
			printf("%c", Password[number]);
		}
		else if (RandoMNumber == 2)
		{
			Password[number] = LETTER[rand() % sizeof(LETTER)];
			RandoMNumber = rand() % 4;
			printf("%c", Password[number]);
		}
		else if (RandoMNumber == 3)
		{
			Password[number] = Numbers[rand() % sizeof(Numbers)];
			RandoMNumber = rand() % 4;
			printf("%c", Password[number]);
		}
		else
		{
			Password[number] = Symbols[rand() % sizeof(Symbols)];
			RandoMNumber = rand() % 4;
			printf("%c", Password[number]);
		}
	}
	printf("\n");
	return (0);
}
