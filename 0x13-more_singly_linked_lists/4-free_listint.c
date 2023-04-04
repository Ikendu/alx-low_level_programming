#include "lists.h"

/**
 * free_listint - function frees a list
 * @head: head of a list.
 *
 * Return: nothing.
 */
void free_listint(listint_t *head)
{
	listint_t *nb;

	while ((nb = head) != NULL)
	{
		head = head->next;
		free(nb);
	}
}
