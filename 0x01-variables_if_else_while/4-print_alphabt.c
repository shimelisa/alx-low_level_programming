#include <stdio.h>
#include <stdlib.h>
/**
* main - main funciton
* Description: print lowercase leter except q & e
* Return: 0 (always for main)
*/
int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
	{
		if (small != 'e' && small != 'q')
			putchar(small);
	}
	putchar('\n');

	return (0);
}
