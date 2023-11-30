#include "lists.h"
#include <stddef.h>

/**
 * free_listint_safe - Frees a listint_t list safely.
 * @h: Pointer to the head of the list.
 *
 * Return: The size of the list that was freed.
 * The function sets the head to NULL.
 */
size_t free_listint_safe(listint_t **h)
{
	listint_t *current, *next;
	size_t count = 0;

	if (h == NULL || *h == NULL)
	return (0);

	current = *h;

	while (current != NULL)
	{
	count++;
	next = current->next;

	current->next = NULL;

	free(current);

	current = next;
	}

	*h = NULL;

	return (count);
}
