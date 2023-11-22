#include <stdio.h>
#include "lists.h"

/**
 * free_listint- function that frees a listint_t list
 * @head: pointer
 *
 * Return:void
 */

void free_listint(listint_t *head)
{
	listint_t *temp;

	if (!head)
	return;

	temp = head;

	head = head->next;
	free(temp);

	free_listint(head);
}
