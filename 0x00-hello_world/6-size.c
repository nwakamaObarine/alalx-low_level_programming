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
	double DoubleType;
	long int LongIntType;
	long long int LongLongIntType;

	printf("size of int: %zu byte(s)\n", sizeof(IntType));
	printf("size of char: %zu byte(s)\n", sizeof(CharType));
	printf("size of float: %zu byte(s)\n", sizeof(FloatType));
	printf("size of double: %zu byte(s)\n", sizeof(DoubleType));
	printf("size of long int: %zu byte(s)\n", sizeof(LongIntType));
	printf("size of long long int: %zu byte(s)\n", sizeof(LongLongIntType));
	return (0);
}
