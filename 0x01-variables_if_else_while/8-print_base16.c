#include <stdio.h>
#include <stdlib.h>
/**
* main - main body
* Description: this program print base16 in lower case
* Return: 0 (always zero)
*/
int main(void)
{
	char small;

	for (small = '0'; small <= '9'; small++)
		putchar(small);
	for (small = 'a'; small <= 'f'; small++)
		putchar(small);
	putchar('\n');

	return (0);
}
