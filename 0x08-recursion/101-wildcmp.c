#include "main.h"

/**
* wildcmp - compare if two strings are the same
* @s1: pointer to first strings
* @s2: pointer to second string
*
* Return: 1 (considered identical) or 0 (not identical)
*/
int wildcmp(char *s1, char *s2)
{
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s1 == *s2)
		return (wildcmp((s1 + 1), (s2 + 1)));
	if (*s2 == '\0')
		return (0);
	if (*s2 == '*')
		return (wildcmp((s1 + 1), s2) || wildcmp(s1, (s2 + 1)));
	if (*s1 == '\0')
	{
		if (*s2 != '*')
			return (0);
		else
			return (wildcmp(s1, (s2 + 1)));
	}
	return (0);

}
