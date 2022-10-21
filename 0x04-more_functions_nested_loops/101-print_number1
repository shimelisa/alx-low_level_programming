#include "main.h"

/**
* print_number - print integer
* @n: integer value to be printed
* Return: void
*/
void print_number(int n)
{
	int i, j, k = 1, l = n % 10;

	n /= 10;
	i = n;

	if (l < 0)
	{
		l *= -1, i *= -1, n *= -1;
		_putchar('-');
	}
	if (l > 0)
	{
		while (i / 10 != 0)
		{
			i /= 10, k *= 10;
		}
		while (k > 0)
		{
			j = n / k;
			_putchar('0' + j);
			n -= j * k;
			k /= 10;
		}
	}
	_putchar('0' + l);
}
