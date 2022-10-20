#include "main.h"
/**
* print_times_table - print n times table
* @n: given integer for times table
* Return: Void
*/
void print_times_table(int n)
{
	int i, j, k;

	if (n >= 0 && n < 16)
	{
		for (i = 0; i <= n; i++)
		{
			_putchar(0 + '0');
			for (j = 1; j <= n; j++)
			{
				k = i * j;
				_putchar(',');
				_putchar(' ');

				if (k < 10)
				{
					_putchar(' ');
					_putchar(' ');
					_putchar(k + '0');
				}
				else if (k < 100)
				{
					_putchar(' ');
					_putchar((k / 10) + '0');
					_putchar((k % 10) + '0');
				}
				else
				{
					_putchar((k / 100) + '0');
					_putchar(((k / 10) % 10) + '0');
					_putchar((k % 10) + '0');
				}
			}
			_putchar('\n');
		}
	}
}
