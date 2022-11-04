#include "main.h"
/**
* _isdigit - check if it's a digit or not
* @c: takes in a character
* Return: 1 if digit and 0 if anything else
*/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
