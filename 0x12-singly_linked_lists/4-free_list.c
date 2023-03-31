#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * free_list - function frees a list.
 * @head: list head to be freed.
 */
void free_list(list_t *head)
{
list_t *temp;

	temp = head;
	while (temp != NULL)
	{
		free(temp->str);
		free(temp);
		temp = temp->next;
	}
}
