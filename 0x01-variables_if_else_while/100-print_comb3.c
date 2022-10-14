#include <stdio.h>
#include <stdlib.h>
/**
* main - main section
* Description: this program prints combination of two digit
* Return: 0 (always 0 for main)
*/
int main(void)
{
	int i, j;

	for (i = 0; i <= 9; i++)
	{
		for (j = i + 1; j <= 9; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
			if (i < 8)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');

	return (0);
}
