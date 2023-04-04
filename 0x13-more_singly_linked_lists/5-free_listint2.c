#include "lists.h"

/**
 * free_listint2 -function frees a list
 * @head: head of a list.
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp;
	listint_t *ab;

	if (head != NULL)
	{
		ab = *head;
		while ((tmp = ab) != NULL)
		{
			ab = ab->next;
			free(tmp);
		}
		*head = NULL;
	}
}
