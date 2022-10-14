#include <stdio.h>
#include <stdlib.h>
/**
* main - main header
* Description: this program prints small letter alphabets
* Return: 0 (always for main)
*/

int main(void)
{
	char small;

	for (small = 'a'; small <= 'z'; small++)
		putchar(small);

	printf("\n");

	return (0);
}
