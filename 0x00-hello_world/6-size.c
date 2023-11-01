#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: 0
 */
int main(void)
{
	int IntType;
	char CharType;
	float FloatType;
	long int LongIntType;
	long long int LongLongIntType;

	printf("Size of an int: %zu byte(s)\n", sizeof(IntType));
	printf("Size of a char: %zu byte(s)\n", sizeof(CharType));
	printf("Size of a float: %zu byte(s)\n", sizeof(FloatType));
	printf("Size of a long int: %zu byte(s)\n", sizeof(LongIntType));
	printf("Size of a long long int: %zu byte(s)\n", sizeof(LongLongIntType));
	return (0);
}
