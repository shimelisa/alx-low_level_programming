#include "main.h"
/**
* _strncat - concatenate two strings
* @dest: first string to be concatenated
* @src: second string to be concatenated
* @n: number of char to be conatenated
* Return: char
*/
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, j = 0;

	while (dest[i] != '\0')
	{
		i++;
	}

	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
