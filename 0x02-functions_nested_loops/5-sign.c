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
		return 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		return 0;
		_putchar('0');
	}
	else
	{
		return -1;
		_putchar('-');
	}
	_putchar ('\n');
}
