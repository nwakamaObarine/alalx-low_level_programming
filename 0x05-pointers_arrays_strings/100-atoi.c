#include "main.h"
/**
 * atoic - converts strings to integer
 * @s: string to convert to integer
 *
 * Return: 0
 */
int _atoi(char *s)
{
	int sign = 1;
	int result = 0;
	int num = 0;

		if (s[num] == '-')
		{
			sign = -1;
			num++;
		}
		if (s[num] == '+')
		{
			num++;
		}
		while (s[num] != '\0')
		{
			if (s[num] >= '0' && s[num] <= '9')
			{
				result = result * 10 + (s[num] - '0');
			}
			else
			{
				break;
			}
			num++;
		}
	result = result *  sign;
	return(result);
}
