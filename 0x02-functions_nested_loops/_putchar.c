#include <unistd.h>
#include "main.h"

/**
 * _putchar - prins to std output
 * @c: character to print
 *
 *Return: always 0(success)
 */

int _putchar(char c)
{
	char rose;

	rose = write(1, &c, 1);
	return (rose);
}
