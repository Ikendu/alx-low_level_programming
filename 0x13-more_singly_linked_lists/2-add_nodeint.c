#include "lists.h"

/**
 * add_nodeint - add a new node at front of list
 * @head: head of a linked list.
 * @n: numeber of element.
 *
 * Return: address of the new element. NUll if it failed.
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *add;

	add = malloc(sizeof(listint_t));

	if (add == NULL)
		return (NULL);

	add->n = n;
	add->next = *head;
	*head = add;

	return (*head);
}
