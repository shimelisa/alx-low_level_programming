#include "main.h"
/**
* memset - fill memmory with constant byte
* @s: points to memory area
* @b: byte to be filled to memory area
* @n: number of memory bytes to be filled
*
* Return: return a pointer to the memory area s
*/
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	while (n > 0)
	{
		s[i] = b;
		i++;
		n--;
	}
	return (s);
}
