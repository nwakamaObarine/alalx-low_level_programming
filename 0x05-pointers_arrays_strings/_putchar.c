#include <unistd.h>
/**
 * main - - prints to output
 *@c: character to print

 * Return: 0
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
