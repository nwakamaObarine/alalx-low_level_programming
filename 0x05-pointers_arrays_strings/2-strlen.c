#include "main.h"
/**
 * _strlen - returns the length of a string
 * @s: string to pointer to retuen length
 *
 * Return: 0
 */
int _strlen(char *s)
{
	int num;

	for (num = 0; s[num] != '\0'; num++)
	;
	
	return (num);
}
