#include "main.h"
/**
* _abs - print absolute value of a number
* @n: input number of ASCII of char
* Return: positive intiger
*/
int _abs(int n)
{
	if (n >= 0)
		return (n);
	else
		return (n * -1);
	_putchar('\n');
}
