#include "lists.h"
#include <stdlib.h>

/**
 * delete_nodeint_at_index - Deletes the node at a given index.
 * @head: Pointer to the head of the linked list.
 * @index: Index of the node to be deleted.
 *
 * Return: 1 if succeeded, -1 if failed.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i;
	listint_t *current, *previous;

	if (!head || !*head)
	return (-1);

	if (index == 0)
	{
	listint_t *temp = *head;
	*head = (*head)->next;
	free(temp);
	return (1);
	}

	current = *head;
	previous = NULL;

	for (i = 0; i < index && current; i++)
	{
	previous = current;
	current = current->next;
	}
	if (!current)
	return (-1);

	previous->next = current->next;
	free(current);
	return (1);
}
