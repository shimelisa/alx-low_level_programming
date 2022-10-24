#include <stdio.h>
#include "main.h"
/**
* puts2 - print every other character
* @str: charcter input
* Return: Void
*/
void puts2(char *str)
{
	int i = 0, j = 0, k;
	char *l = str;

	while (*l != '\0')
	{
		l++;
		i++;
	}

	j = i - 1;

	for (k = 0; k <= j; k++)
	{
		if (k % 2 == 0)
		{
			_putchar(str[k]);
		}
	}

	_putchar('\n');
}
