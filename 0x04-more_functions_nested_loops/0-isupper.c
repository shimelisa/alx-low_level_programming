#include "main.h"
#include <stdio.h>

/**
* -isupper - checkss for uppercase character
* @c: character
* Return: Always 0.
*/

int _isuper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
