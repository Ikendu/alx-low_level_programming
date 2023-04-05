#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list.
 * @head: head of a linked list.
 *
 * Return: the address of the node where the loop starts
 * or NULL.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *pp;
	listint_t *prev;

	pp = head;
	prev = head;
	while (head && pp && pp->next)
	{
		head = head->next;
		pp = pp->next->next;

		if (head == pp)
		{
			head = prev;
			prev =  pp;
			while (1)
			{
				pp = prev;
				while (pp->next != head && pp->next != prev)
				{
					pp = pp->next;
				}
				if (pp->next == head)
					break;

				head = head->next;
			}
			return (pp->next);
		}
	}

	return (NULL);
}
