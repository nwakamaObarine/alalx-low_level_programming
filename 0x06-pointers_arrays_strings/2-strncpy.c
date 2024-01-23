#include "main.h"
/**
 * _strncpy - copies the n number of string from src to dest
 * @n: number of string tobe copied
 * @dest: string destination
 * @src: string source
 *
 *Return: 0
 */
char *_strncpy(char *dest, char *src, int n)
{
	int DestLength;

	for (DestLength = 0; DestLength < n && dest[DestLength] != '\0'; DestLength++)
	{
		dest[DestLength] = src[DestLength];
	
	}
	while (DestLength < n)
	{
		dest[DestLength] = '\0';
		DestLength++;
	}
	return (dest);
}
