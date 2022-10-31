/*
* File: 4-strpbrk.c
* Auth: Shimelis Adugna
*/

#include "main.h"
 /**
* _strpbrk - search string for an of a set of bytes
* @s: String to be searched
* @accept: set of bytes to be searched
*
* Return: pointer to the matched byte
*/
char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
				return (s);
		}

		s++;
	}

	return ('\0');
}
