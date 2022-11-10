#include <stdlib.h>
#include "main.h"

/**
 * *_realloc -  reallocates a memory block using malloc and free
 * @ptr: void pointer
 * @old_size: already allocated size
 * @new_size: new size to allocate
 *
 * Return: pointer to newly allocated memory or null
 **/
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *ptr1;
	unsigned int i = 0;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	ptr1 = malloc(new_size * sizeof(char));
	if (ptr1 == NULL)
		return (NULL);

	if (new_size > old_size)
	{
		while (i < old_size)
		{
			ptr1[i] = ((char *)ptr)[i];
			i++;
		}
		free(ptr);
		return (ptr1);
	}

	while (i < new_size)
	{
		ptr1[i] = ((char *)ptr)[i];
		i++;
	}
	free(ptr);
	return (ptr1);
}
