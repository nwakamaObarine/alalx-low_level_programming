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

	printf("Size of int: %zu byte(s)\n", sizeof(IntType));
	printf("Size of char: %zu byte(s)\n", sizeof(CharType));
	printf("Size of float: %zu byte(s)\n", sizeof(FloatType));
	printf("Size of long int: %zu byte(s)\n", sizeof(LongIntType));
	printf("Size of long long int: %zu byte(s)\n", sizeof(LongLongIntType));
	return (0);
}
