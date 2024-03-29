#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 *
 * Return: no return.
 */
void free_listp2(listp_x **head)
{
	listp_x *temp;
	listp_x *curr;

	if (head != NULL)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		{
			curr = curr->next;
			free(temp);
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees linked list.
 * @h: head of the list.
 *
 * Return: size of the list
 */

size_t free_listint_safe(listint_t **h)
{
	size_t nd = 0;
	listp_x *hp, *new, *add;
	listint_t *curr;

	hp = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_x));

		if (new == NULL)
			exit(98);

		new->px = (void *)*h;
		new->next = hp;
		hp = new;

		add = hp;

		while (add->next != NULL)
		{
			add = add->next;
			if (*h == add->px)
			{
				*h = NULL;
				free_listp2(&hp);
				return (nd);
			}
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nd++;
	}

	*h = NULL;
	free_listp2(&hp);
	return (nd);
}
