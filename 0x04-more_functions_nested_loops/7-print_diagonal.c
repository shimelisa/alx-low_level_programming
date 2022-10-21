#include "main.h"

/**
* print_diagonal - print backward slash diagonally
* @n: integer that tells number of line
* Return: void
*/
void print_diagonal(int n)
{
	int c, d;

	if (n > 0)
	{
		for (c = 1; c <= n; c++)
		{
			for (d = 1; d < c; d++)
				_putchar(' ');
			_putchar(92);
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
