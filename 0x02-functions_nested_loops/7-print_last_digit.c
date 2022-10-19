#include "main.h"
/**
* print_last_digit - print last digit of a number
* @n: number
* Return: last digit
*/
int print_last_digit(int n)
{
	int shim = n % 10;

	if (shim < 0)
	{
		_putchar(-shim + 48);
		return (-shim);
	}
	else
	{
		_putchar(shim + 48);
		return (shim);
	}
	_putchar('\n');
}
