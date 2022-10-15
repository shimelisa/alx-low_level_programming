#include <stdio.h>
#include <stdlib.h>
/**
* main - main body of the program
* Description: this program lists combi of 2digit#
* Return: 0 (always 0 for main branch)
*/
int main(void)
{
	int i, j, k;

	for (i = 0; i <= 29; i++)
	{
		for (j = i + 1; j <= 29; j++)
		{
			if (i < 10)
			{
				putchar(0 + '0');
			}
			putchar(i + '0');
			putchar(' ');

			if (j < 10)
			{
				putchar(0 + '0');
			}
			putchar(j + '0');

			if (j < 29)
			{
				putchar(',');
			}
		}
	}

	return (0);
}
