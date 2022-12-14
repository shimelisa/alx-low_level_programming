#include "main.h"
#include <stdlib.h>

/**
* wordCounterRec - count num of words recursively
* @str: pointer to char
* @i: current index
*
* Return: number of words
**/
int wordCounterRec(char *str, int i)
{
	if (str[i] == '\0')
		return (0);
	if (str[i] == ' ' && str[i + 1] != ' ' && str[i + 1] != '\0')
		return (1 + wordCounterRec(str, i + 1));
	return (wordCounterRec(str, i + 1));
}

/**
* word_counter - counts number of words in 1d array of strings
* @str: pointer to char
*
* Return: number of words
**/
int word_counter(char *str)
{
	if (str[0] != ' ')
		return (1 + wordCounterRec(str, 0));
	return (wordCounterRec(str, 0));
}

/**
* strtow - splits a string into words.
* @str: string to be splitted
*
* Return: pointer to an array of strings (words) or null
**/
char **strtow(char *str)
{
	char **strSplt;
	int i, n, m, words;

	if (str == NULL || str[0] == 0)
		return (NULL);
	words = word_counter(str);
	if (words < 1)
		return (NULL);
	strSplt = malloc(sizeof(char *) * (words + 1));
	if (strSplt == NULL)
		return (NULL);
	i = 0;
	while (i < words && *str != '\0')
	{
		if (*str != ' ')
		{
			n = 0;
			while (str[n] != ' ')
				n++;
			strSplt[i] = malloc(sizeof(char) * (n + 1));
			if (strSplt[i] == NULL)
			{
				while (--i >= 0)
					free(strSplt[--i]);
				free(strSplt);
				return (NULL);
			}
			m = 0;
			while (m < n)
			{
				strSplt[i][m] = *str;
				m++, str++;
			}
			strSplt[i][m] = '\0';
			i++;
		}
		str++;
	}
	strSplt[i] = '\0';
	return (strSplt);
}
