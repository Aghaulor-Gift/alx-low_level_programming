#include "lists.h"
#include <stdio.h>

/**
 * get_nodeint_at_index - function that returns the nth node
 * @head: Pointer to the head of the list.
 * @index: Index of the node, starting at 0.
 *
 * Return: The nth node, or NULL if the node does not exist.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int count = 0;
	listint_t *n = head;

	while (n != NULL)
	{
	if (count == index)
	return (n);

	count++;
	n = n->next;
	}

	return (NULL);
}
