#include "main.h"
#include "stdlib.h"

/**
 * _calloc - function that allocates memory for an array using `malloc`
 * @nmemb: number of element for array
 * @size: byte size for each element
 *
 * Return: pointer to allocated memory array or NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *s1;

	if (nmemb == 0 || size == 0)
		return (NULL);

	s1 = malloc(size * nmemb);

	if (s1 == NULL)
		return (NULL);

	for (i = 0; i < size * nmemb; i++)
		*(s1 + i) = 0;

	return ((void *)s1);
}
