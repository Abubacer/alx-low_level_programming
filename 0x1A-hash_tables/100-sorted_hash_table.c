#include "hash_tables.h"

/**
 * sorted_list_add - insert new node in the sorted linked list.
 * @ht: The sorted hash table.
 * @newNode: the new node to add.
 *
 */
void sorted_list_add(shash_table_t *ht, shash_node_t *newNode)
{
	shash_node_t *current;

	if (ht->shead == NULL)
	{
		ht->shead = ht->stail = newNode;
		newNode->sprev = newNode->snext = NULL;
		return;
	}
	if (strcmp(newNode->key, ht->shead->key) < 0)
	{
		newNode->snext = ht->shead;
		newNode->sprev = NULL;
		ht->shead->sprev = newNode;
		ht->shead = newNode;
		return;
	}
	if (strcmp(newNode->key, ht->stail->key) > 0)
	{
		newNode->sprev = ht->stail;
		newNode->snext = NULL;
		ht->stail->snext = newNode;
		ht->stail = newNode;
		return;
	}
	current = ht->shead->snext;
	while (current != NULL && strcmp(newNode->key, current->key) > 0)
		current = current->snext;
	newNode->sprev = current->sprev;
	newNode->snext = current;
	current->sprev->snext = newNode;
	current->sprev = newNode;
}

/**
 * shash_table_create - creates a sorted hash table.
 * @size: the size of the array.
 *
 * Return: a pointer to the newly created sorted hash table.
 *         Otherwise, return NULL.
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *shash_table;

	shash_table = malloc(sizeof(shash_table_t));

	if (shash_table == NULL)
		return (NULL);

	shash_table->size = size;
	shash_table->array = malloc(size * sizeof(shash_table_t *));
	if (shash_table->array == NULL)
	{
		free(shash_table);
		return (NULL);
	}

	shash_table->shead = NULL;
	shash_table->stail = NULL;

	return (shash_table);
}

/**
 * shash_table_set - adds or updates an element in the sorted hash table.
 * @ht: the sorted hash table to add/update the element to.
 * @key: the key. Must not be an empty str.
 * @value: the value of the key. duplicated. Can be an empty str.
 * Return: 1 if it succeeds, 0 otherwise.
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	shash_node_t *newNode, *current;
	unsigned long int idx;

	if (!ht || !key || !*key)
		return (0);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
		{
			free(current->value);
			current->value = strdup(value);
			return (1);
		}
		current = current->snext;
	}
	newNode = malloc(sizeof(shash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	sorted_list_add(ht, newNode);

	return (1);
}
/**
 * shash_table_get - gets the value associated with a key in the hash table.
 * @ht: The sorted hash table.
 * @key: The key.
 *
 * Return: The value associated with the key.
 *         Otherwise, return NULL if the key is not found.
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *current;
	unsigned long int idx;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	current = ht->array[idx];
	while (current)
	{
		if (strcmp(current->key, key) == 0)
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
/**
 * shash_table_print - prints the sorted hash table.
 * using the sorted linked list.
 * @ht: The sorted hash table to print.
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->shead;
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->snext != NULL)
			printf(", ");
		current = current->snext;
	}
	printf("}\n");
}
/**
 * shash_table_print_rev - prints the sorted hash table.
 * in reverse order using the sorted linked list.
 * @ht: the sorted hash table to print.
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *current;

	if (ht == NULL)
		return;

	printf("{");
	current = ht->stail;
	while (current)
	{
		printf("'%s': '%s'", current->key, current->value);
		if (current->sprev != NULL)
			printf(", ");
		current = current->sprev;
	}
	printf("}\n");
}

/**
 * shash_table_delete - deletes the sorted hash table.
 * @ht: The sorted hash table to delete.
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *current, *tmp;
	unsigned long int i;

	if (ht == NULL)
		return;

	for (i = 0 ; i < ht->size ; i++)
	{
		current = ht->array[i];
		while (current)
		{
			tmp = current;
			current = current->next;
			free(tmp->key);
			free(tmp->value);
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
