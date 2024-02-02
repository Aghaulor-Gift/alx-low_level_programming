#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * shash_table_create - Creates a sorted hash table.
 * @size: The size of the array.
 *
 * Return: A pointer to the created sorted hash table, or NULL if failure.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sht;
	unsigned long int i;

	sht = malloc(sizeof(shash_table_t));
	if (sht == NULL)
	return (NULL);

	sht->size = size;
	sht->array = malloc(sizeof(shash_node_t *) * size);
	if (sht->array == NULL)
	{
	free(sht);
	return (NULL);
	}

	sht->shead = NULL;
	sht->stail = NULL;

	for (i = 0; i < size; i++)
	sht->array[i] = NULL;

	return (sht);
}

/**
 * shash_table_set - Adds an element to the sorted hash table.
 * @ht: The sorted hash table.
 * @key: The key string.
 * @value: The value associated with the key.
 *
 * Return: 1 if it succeeded, 0 otherwise.
 */

int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *new_node, *current_node;
	unsigned long int index;

	if (ht == NULL || key == NULL || *key == '\0')
	return (0);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
	if (strcmp(current_node->key, key) == 0)
	{
	free(current_node->value);
	current_node->value = strdup(value);
	if (current_node->value == NULL)
	return (0);
	return (1);
	}
	current_node = current_node->next;
	}

	new_node = malloc(sizeof(shash_node_t));
	if (new_node == NULL)
	return (0);

	new_node->key = strdup(key);
	if (new_node->key == NULL)
	{
	free(new_node);
	return (0);
	}

	new_node->value = strdup(value);
	if (new_node->value == NULL)
	{
	free(new_node->key);
	free(new_node);
	return (0);
	}

	new_node->next = ht->array[index];
	ht->array[index] = new_node;

	if (ht->shead == NULL || strcmp(key, ht->shead->key) <= 0)
	{
	new_node->snext = ht->shead;
	new_node->sprev = NULL;
	if (ht->shead != NULL)
	ht->shead->sprev = new_node;
	ht->shead = new_node;
	}
	else
	{
	current_node = ht->shead;
	while (current_node->snext != NULL && strcmp(key, current_node->snext->key) > 0)
	current_node = current_node->snext;

	new_node->snext = current_node->snext;
	new_node->sprev = current_node;
	if (current_node->snext != NULL)
	current_node->snext->sprev = new_node;
	current_node->snext = new_node;
	}

	return (1);
}

/**
 * shash_table_get - Retrieves a value associated with a key.
 * @ht: The sorted hash table.
 * @key: The key to look for.
 *
 * Return: The value with the key, or NULL if key couldn't be found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	unsigned long int index;
	shash_node_t *current_node;

	if (ht == NULL || key == NULL || *key == '\0')
	return (NULL);

	index = key_index((const unsigned char *)key, ht->size);

	current_node = ht->array[index];
	while (current_node != NULL)
	{
	if (strcmp(current_node->key, key) == 0)
	return (current_node->value);

	current_node = current_node->next;
	}

	return (NULL);
}

/**
 * shash_table_print - Prints a sorted hash table.
 * @ht: The sorted hash table.
 *
 * Return: void
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
	return;

	printf("{");
	for (current_node = ht->shead; current_node != NULL; current_node = current_node->snext)
	{
	printf("'%s': '%s'", current_node->key, current_node->value);
	if (current_node->snext != NULL)
	printf(", ");
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Prints a sorted hash table in reverse order.
 * @ht: The sorted hash table.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current_node;

	if (ht == NULL)
        return;

	printf("{");
	for (current_node = ht->stail; current_node != NULL;
			current_node = current_node->sprev)
	{
	printf("'%s': '%s'", current_node->key, current_node->value);
	}
}

/**
 * shash_table_delete - Deletes a sorted hash table.
 * @ht: The sorted hash table to be deleted.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current_node, *temp_node;
	unsigned long int i;

	if (ht == NULL)
	return;

	for (i = 0; i < ht->size; i++)
	{
	current_node = ht->array[i];
	while (current_node != NULL)
	{
	temp_node = current_node;
	current_node = current_node->next;
	free(temp_node->key);
	free(temp_node->value);
	free(temp_node);
	}
	}

	free(ht->array);

	current_node = ht->shead;
	while (current_node != NULL)
	{
	temp_node = current_node;
	current_node = current_node->snext;
	free(temp_node->key);
	free(temp_node->value);
	free(temp_node);
	}

	free(ht);
}
