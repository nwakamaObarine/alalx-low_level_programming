#include <stdio.h>
/** main - prints address and value of n
 *
 * Return: 0
 */
int main(void)
{
	int a[98];

	printf("a:%p\n", a);
	printf("&a[0]: %p\n", &(a[0]));
	printf("&a[1]: %p\n", &(a[1]));
	return (0);
}
