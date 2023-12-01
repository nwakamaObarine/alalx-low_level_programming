#include "main.h"
/**
 * _strcpy - copies items from from src to dest
 * @src: where the striing is copied from
 * @dest: where the string is copied to
 *
 * Return: 0
 */
char *_strcpy(char *dest, char *src)
{
	int num;

	for (num = 0; src[num] != '\0'; num++)
	{
		dest[num] = src[num];
	}
	dest[num] = '\0';
	return (dest);
}
