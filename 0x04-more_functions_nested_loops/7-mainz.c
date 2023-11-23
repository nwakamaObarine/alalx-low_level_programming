#include <stdio.h>
/**
 * modif_my_param - modifies a pointer
 * @m: pointer to be set to 402
 *
 * Return: 0
 */
void modif_my_param(int *m)
{
	printf("value of 'm': %p\n", m);
	printf("Address of 'm': %p\n", &m);
	*m = 402;
}
