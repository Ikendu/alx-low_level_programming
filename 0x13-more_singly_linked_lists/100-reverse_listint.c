#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 * @head: pointer of first node in the list
 *
 * Return: pointer to the first node of the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *pv = NULL;
	listint_t *nt = NULL;

	while (*head)
	{
		nt = (*head)->nt;
		(*head)->nt = pv;
		pv = *head;
		*head = nt;
	}

	*head = pv;

	return (*head);
}
