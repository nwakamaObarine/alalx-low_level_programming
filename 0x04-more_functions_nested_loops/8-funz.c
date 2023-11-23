#include <stdio.h>
/**
 * modif_my_param - modifies the value of the integer to a pointer
 * @cc: first pointer
 * @ccc: first interger
 *
 * Return: 0
 */
void modif_my_char_var(char *cc, char ccc)
{
	ccc = 'O';
	cc = &ccc;
	printf("The address of 'cc': %p\n", &cc);
	printf("The value of 'cc': %p\n", cc);
	printf("The address of 'ccc': %p\n", &ccc);
	printf("The value of 'ccc': %d(%c)\n", ccc, ccc);
}
