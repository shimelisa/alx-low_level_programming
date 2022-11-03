#include "main.h"

/**
* string_length - finds the lengh of a string
* @s: pointer to string
*
* Return: length of string
*/
int string_length(char *s)
{
	if (*s == '\0')
		return (0);
	return (string_length(s + 1) + 1);
}

/**
* check_if_palindrome - check if string is palindrome
* @s: pointer to string
* @i: intermidiate temporary parameter
* @j: intermidate temporary parameter
*
* Return: 1 if palindrome 0 else
*/
int check_if_palindrome(char *s, int i, int j)
{
	if (i == j)
		return (1);
	if (i == (j - 1))
		return (s[i] == s[j]);
	if (s[i] != s[j])
		return (0);
	return (check_if_palindrome(s, i + 1, j - 1));
}

/**
* is_palindrome - checks if a string is palindrome
* @s: pointer to string
* Return: 1 (if string is palindrome) or 0 (if not)
*/
int is_palindrome(char *s)
{
	int l;

	l = string_length(s);
	if (l == 0 || *s != s[l - 1])
		return (0);
	return (check_if_palindrome(s, 0, l - 1));
}
