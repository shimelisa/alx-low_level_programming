#include <stdio.h>
#include <stdlib.h>

/**
* main - print lower and upercase letter
* Description: this program prints lower & uppercase letters
* Return: 0 (always 0 for main)
*/

int main(void)
{
	char sml_cap;

	for (sml_cap = 'a'; sml_cap <= 'z'; sml_cap++)
		putchar(sml_cap);
	for (sml_cap = 'A'; sml_cap <= 'Z'; sml_cap++)
		putchar(sml_cap);
	putchar('\n');

	return (0);
}
