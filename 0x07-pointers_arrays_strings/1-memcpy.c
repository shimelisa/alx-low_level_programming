#include "main.h"
/**
* _memcpy - funciton to copy memmory area
* @dest: destination memory area
* @src: source memory area
* @n: number of memmory bytes to be copied
*
* Return: pointer to dest (destination memory)
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		dest[i] = src[i];
		i++;
		n--;
	}
	return (dest)
}
