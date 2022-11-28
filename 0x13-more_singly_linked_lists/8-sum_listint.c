#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the dates of linked list
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: 0 or sum of all the data
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}
