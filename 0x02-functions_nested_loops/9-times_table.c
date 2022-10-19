#include "main.h"
/**
* times_table - print 9 times table
*/
void times_table(void)
{
	int i, j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (i <= 1 || j <= 1)
			{
				_putchar((i * j) + '0');
				if (j < 9)
				{
					_putchar(',');
					_putchar(' ');
				}
			}

			_putchar(((i * j) / 10) + '0');
			_putchar(((i * j) % 10) + '0');
			if (j < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
	return (void);
}
