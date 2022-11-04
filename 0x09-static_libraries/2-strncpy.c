#include "main.h"
/**
* _strncpy - copy a string
* @dest: string to be updated
* @src: string to be copied
* @n: number of charcater to be copied
* Return: charcater (updated dest)
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j = 0;

	while (j < n && src[j] != '\0')
	{
		dest[j] = src[j];
		j++;
	}

	while (j < n)
	{
		dest[j] = '\0';
		j++;
	}

	return (dest);
}
