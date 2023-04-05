#include "lists.h"

/**
 * insert_nodeint_at_index - insert new node at a given position.
 * @head: list head.
 * @idx: index of adding list
 * @n: integer.
 *
 * Return: the address of new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int x;
	listint_t *new;
	listint_t *hd;

	hd = *head;

	if (idx != 0)
	{
		for (x = 0; x < idx - 1 && hd != NULL; x++)
		{
			hd = hd->next;
		}
	}

	if (hd == NULL && idx != 0)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
	}
	else
	{
		new->next = hd->next;
		hd->next = new;
	}

	return (new);
}
