#include "main.h"
/**
* _strspn - a function that gets the length of a perfix substing
* @s: charcters
* @accept: number of bytes to be returned from s
*
* Return: return number of bytes in intial segemnt
*/
unsigned int _strspn(char *s, char *accept)
{
	int i;
	unsigned int j = 0;

	while (*s)
	{
		for (i = 0; accept[i]; i++)
		{
			if (*s == accept[i])
			{
				j++;
				break;
			}
			else if (accept[i + 1] == '\0')
				return (j);
		}
		s++;
	}

	return (j)
}
