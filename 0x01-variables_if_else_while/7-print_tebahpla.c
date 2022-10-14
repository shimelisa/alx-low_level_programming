#include <stdio.h>
#include <stdlib.h>
/**
* main - main body
* Description: this program prints alphabet in revers
* Return: 0 (always 0)
*/
itn main(void)
{
	char small;

	for (small = 'z'; small >= 'a'; small--)
		putchar(small);
	putchar('\n');

	return (0);
}
