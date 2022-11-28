#include "lists.h"
#include <stdio.h>

/**
 * list_len - Finds the number of elements in linked list
 * @h: The linked list_t list.
 *
 * Return: The number of elements in h.
 */
size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}
