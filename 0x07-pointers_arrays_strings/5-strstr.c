#include "main.h"
/**
* _strstr - function to locate a substing
* @haystack: String
* @needle: Sub string to be located
*
* Return: ponter to beginning of located substring
*/
char *_strstr(char *haystack, char *needle)
{
	char *c = haystack;
	char *d = needle;

	while (*c)
	{
		d = needle;
		c = haystack;
		while (*d)
		{
			if (*c == *d)
			{
				d++;
				c++;
			}
			else
				break;
		}
		if (*d == '\0')
			return (haystack);
		haystack++;
	}
	return (0);
}
