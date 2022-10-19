#include "main.h"
/**
* print_sign - print sign of number
* @n: number of ASCII value of character
* Return: 1 or 0 or -1 depending on number sign
*/
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return 1;
	}
	else if (n == 0)
	{
		_putchar('0');
		return 0;
	}
	else
	{
		_putchar('-');
		return -1;
	}
	_putchar ('\n');
}
