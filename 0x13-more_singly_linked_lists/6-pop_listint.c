#include "lists.h"

/**
 * pop_listint - Deletes the head node of a linked list
 * @head: A pointer to the address of the head of linked list
 *
 * Return: 0 or head node's data
 */
int pop_listint(listint_t **head)
{
	listint_t *tmp;
	int hnd;

	if (*head == NULL)
		return (0);

	tmp = *head;
	hnd = (*head)->n;
	*head = (*head)->next;

	free(tmp);

	return (hnd);
}
