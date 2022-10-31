#include "main.h"
/**
* _strchr - function that locates a character in a string
* @s: string to bechecked
* @c: charcter to be searched
*
* Return: pointer to first occurence of the charcater c
*/
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return ('\0');
}
