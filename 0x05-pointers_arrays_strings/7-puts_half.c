#include <stdio.h>
#include "main.h"
/**
* puts_half - print the last half of sting
* @str: string to be displayed
* Return: Void
*/
void puts_half(char *str)
{
	int i = 0, j;
	char *k = str;

	while (*k != '\0')
	{
		k++;
		i++;
	}

	if (i % 2 == 0)
		j = i / 2;
	else
		j = (i + 1) / 2;

	for ( ; j < i; j++)
	{
		_putchar(str[j]);
	}

	_putchar('\n');
}
