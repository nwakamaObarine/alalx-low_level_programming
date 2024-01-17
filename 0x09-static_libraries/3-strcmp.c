#include "main.h"
/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0
 */
int _strcmp(char *s1, char *s2)
{
	int DestLength;

	for (DestLength = 0; s1[DestLength] != '\0' || s2[DestLength] != '\0'; DestLength++)
	{
		if (s1[DestLength] != s2[DestLength])
		{
			return (s1[DestLength] - s2[DestLength]);
		}
	}
	return (0);
}
