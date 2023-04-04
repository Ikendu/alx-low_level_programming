#include "lists.h"

/**
 * listint_len - function output number of elements
 * @h: head of a list.
 *
 * Return: numbers of lements
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		h = h->next;
		count++;
	}
	return (count);
}
