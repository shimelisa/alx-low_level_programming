#include <stdio.h>
#include "main.h"
/**
* *_strcpy - copy string pointed by src to destination
* @dest: destination of copied string
* @src: source of to be copied string
* Return: returns char value
*/
char *_strcpy(char *dest, char *src)
{
	int i = 0, j = 0;

	while (*(src + i) != '\0')
	{
		i++;
	}

	for ( ; j < i; j++)
	{
		dest[j] = src[j];
	}

	dest[i] = '\0';

	return (dest);
}
