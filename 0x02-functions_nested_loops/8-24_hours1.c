#include "main.h"
/**
* jack_bauer - print 24Hr minute
* Return: void
*/
void jack_bauer(void)
{
	int i, j, k, l;

	for (i = 48; i < 51; i++)
	{
		for (j = 48; j < 52; j++)
		{
			for (k = 48; k < 54; k++)
			{
				for (l = 48; l < 58; l++)
				{
					if (i == 50 && j > 51)
						break;
					_putchar(i);
					_putchar(j);
					_putchar(58);
					_putchar(k);
					_putchar(l);
					_putchar('\n');
				}
			}
		}
	}
	_putchar('\n');
}
