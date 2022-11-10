#include "main.h"
#include "stdlib.h"

/**
 * string_nconcat - function that concatenate two strings
 * @s1: First string
 * @s2: Second String
 * @n: byte to be taken from s2 string
 *
 * Return: pointer to concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i = 0;
	unsigned int j = 0;
	char *s3;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (s1[i] != '\0')
		i++;

	s3 = malloc(sizeof(char) * (i + n + 1));

	if (s3 == NULL)
		return (NULL);

	i = 0;
	while (s1[i] != '\0')
	{
		s3[i] = s1[i];
		i++;
	}

	while (j < n && s2[j] != '\0')
	{
		s3[i] = s2[j];
		i++, j++;
	}

	s3[i] = '\0';

	return (s3);
}
