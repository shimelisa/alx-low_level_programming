#include "main.h"

/**
* strlen_wo_astrsk - lenght of string w/o asterisk
* @ss1: string to be checked
*
* Return: return length
*/
int strlen_wo_astrsk(char *ss1)
{
	int l = 0, i = 0;

	if (*(ss1 + i))
	{
		if (*ss1 != '*')
			l++;
		i++;
		l += strlen_wo_astrsk(ss1 + i);
	}
	return (l);
}

/**
* pass_astrsk - pass throught sting located at * until char
* @ss2: string to checked
*
* Return: void
*/
void pass_astrsk(char **ss2)
{
	if (**ss2 == '*')
	{
		(*ss2)++;
		pass_astrsk(ss2);
	}
}

/**
* after_astrsk_match - check if string match after astrsk
* @ss3: string to be checked
* @ss4: after astrisk string
* @a: after check
*
* Return: pointer to null byte or unmatched element pointer
*/
char *after_astrsk_match(char *ss3, char *ss4)
{
	int ll = strlen_wo_astrsk(ss3) - 1;
	int ll2 = strlen_wo_astrsk(ss4) - 1;

	if (*ss4 == '*')
		pass_astrsk(&ss4);

	if (*(ss3 + ll - ll2) == *ss4 && *ss4 != '\0')
	{
		ss4++;
		return (after_astrsk_match(ss3, ss4));
	}
	return (ss4);
}

/**
* wildcmp - compare if two strings are the same
* @s1: pointer to first strings
* @s2: pointer to second string
*
* Return: 1 (considered identical) or 0 (not identical)
*/
int wildcmp(char *s1, char *s2)
{
	if (*s2 == '*')
	{
		pass_astrsk(&s2);
		s2 = after_astrsk_match(s1, s2);
	}

	if (*s2 == '\0')
		return (1);
	if (*s1 != *s2)
		return (0);
	return (wildcmp(++s1, ++s2));
}
