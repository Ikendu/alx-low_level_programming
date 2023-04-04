#include "lists.h"

/**
 * pop_listint - deletes the head node of list
 * @head: head of list.
 *
 * Return: head contents.
 */
int pop_listint(listint_t **head)
{
	int hd;
	listint_t *h;
	listint_t *current;

	if (*head == NULL)
		return (0);

	current = *head;

	hd = current->n;

	h = current->next;

	free(current);

	*head = h;

	return (hd);
}
