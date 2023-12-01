#include "main.h"
/**
 * rev_string - returns a reversed string
 * @s: string to return
 *
 * Return: 0
 */
void rev_string(char *s)
{
	int num, nam, nab;
	char nan;

	for (num = 0; s[num] != '\0'; num++)
	;
	nab = num;
	for (num--, nam = 0; nam < nab / 2; num--, nam++)
	{
		nan = s[nam];
		s[nam] = s[num];
		s[num] = nan;
	}
}
