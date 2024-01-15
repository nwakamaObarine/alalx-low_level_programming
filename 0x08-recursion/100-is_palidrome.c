#include "main.h"
#include <stdio.h>
/**
 * is_palindrome - checks if a word is same when spelt both ways
 *@s: word to check
 *
 * Return: 0
 */
int  is_palindrome(char *s)
{
	int StringLength;

	StringLength = is_palindrome_length(s) - 1;

	return (is_palindrome_cmp(s, StringLength - 1));
}
/**
 * is_palindrome_length - gets the length of a string
 *  @s: strng to get lenght
 *
 *  Return: 0
 */
int is_palindrome_length(char *s)
{
	if (*s == '\0')
	{
		return (1);
	}
	else
	{
		return (1 + is_palindrome_length(s + 1));
	}
	return (0);
}
/**
 * is_palindrome_cmp - compares a string for palindrome
 * @s: string to be compared
 * @n: checks
 *
 * Return: 0
 */
int is_palindrome_cmp(char *s, int n)
{
	if (*s != *(s + n))
	{
		return (0);
	}
	else
	{
		if (n <= 0)
		{
			return (1);
		}
		else
		{
			return (is_palindrome_cmp(s + 1, n - 2));
		}
	}
	return (0);
}
