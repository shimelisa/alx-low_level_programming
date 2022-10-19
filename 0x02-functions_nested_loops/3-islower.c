#include "main.h"
/**
* _islower - Entry point
* Description: checks a charcter and print 1if lower & o if not
* @c: integer value or ASCII vlaue of char
* Return: 1 if true. 0 if false
*/
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
	_putchar ('\n');
}
