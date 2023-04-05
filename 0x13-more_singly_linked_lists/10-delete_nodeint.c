#include "lists.h"

/**
 * delete_nodeint_at_index - deletes the node at index marked
 * @head: head of the list.
 * @index: index of the list where the node is
 * deleted.
 *
 * Return: 1 or -1 if it failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *p;
	listint_t *next;

	p = *head;

	if (index != 0)
	{
		for (i = 0; i < index - 1 && p != NULL; i++)
		{
			p = p->next;
		}
	}

	if (p == NULL || (p->next == NULL && index != 0))
	{
		return (-1);
	}

	next = p->next;

	if (index != 0)
	{
		p->next = next->next;
		free(next);
	}
	else
	{
		free(p);
		*head = next;
	}

	return (1);
}
