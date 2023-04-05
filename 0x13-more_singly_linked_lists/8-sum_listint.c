#include "lists.h"

/**
 * sum_listint - returns the sum of all the data in a list
 * @head: head of link list.
 *
 * Return: sum of data (n).
 */
int sum_listint(listint_t *head)
{
	int result;

	result = 0;
	while (head != NULL)
	{
		result += head->n;
		head = head->next;
	}

	return (result);
}
