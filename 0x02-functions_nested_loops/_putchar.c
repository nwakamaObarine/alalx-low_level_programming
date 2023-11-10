#include <unistd.h>
#include "main.h"

/**
 * _putchar - prins to std output
 * @c: character to print
 i*
 *Return: always 0(success)
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
