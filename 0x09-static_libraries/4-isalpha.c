#include "main.h"
/**
* _isalpha - checks whether is is alphabet or not
* @c: is integer or ASCII value of character
* Return: 1 for alphabet and 0 for others
*/
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
	_putchar('\n');
}
