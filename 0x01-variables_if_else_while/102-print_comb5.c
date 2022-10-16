#include <stdio.h>
#include <stdlib.h>
/**
* main - main body of the program
* Description: this program lists combi of 2digit#
* Return: 0 (always 0 for main branch)
*/
int main(void)
{
	int i, j;
	char str[2];

	for (i = 0; i <= 99; i++)
	{
		for (j = i + 1; j <= 99; j++)
		{
			if (i < 10)
			{
				putchar(0 + '0');
				putchar(i + '0');
				putchar(' ');
			}
			else
			{
				str[0] = i / 10;
				str[1] = i % 10;

				putchar(str[0] + '0');
				putchar(str[1] + '0');
				putchar(' ');
			}

			if (j < 10)
			{
				putchar(0 + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
			else if (j < 99)
			{
				str[0] = j / 10;
				str[1] = j % 10;

				putchar(str[0] + '0');
				putchar(str[1] + '0');
				putchar(',');
				putchar(' ');
			}
			else if (j == 99 && i < 98)
			{
				str[0] = j / 10;
				str[1] = j % 10;

				putchar(str[0] + '0');
				putchar(str[1] + '0');
				putchar(',');
				putchar(' ');
			}
			else if (j == 99 && i == 98)
			{
				str[0] = j / 10;
				str[1] = j % 10;

				putchar(str[0] + '0');
				putchar(str[1] + '0');
			}
			
		}
	}
	putchar('\n');

	return (0);
}
