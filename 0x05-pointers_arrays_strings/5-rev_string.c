#include <stdio.h>
#include "main.h"
/**
* rev_string - reveste string in same parameter
* @s: string to be reversed
* Return: void
*/
void rev_string(char *s)
{
	int i = 0, j = 0, k = 0, l;
	char *m = s, n;

	while (*m != '\0')
	{
		m++;
		i++;
	}

	j = i - 1;

	for ( ; k < ((j / 2) + 1); k++)
	{
		l = (j - k);
		n = s[k];
		s[k] = s[l];
		s[l] = n;
	}
}
