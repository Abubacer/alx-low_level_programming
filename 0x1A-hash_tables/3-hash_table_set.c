#include "hash_tables.h"

/**
 * hash_table_set - a function that adds an element to the hash table.
 * @ht: the hash table to add or update the key/value to
 * @key: the key to add the element.
 * @value: the value associated with the key.
 *
 * Return: 1 on success. zero otherwise.
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *bucket, *newNode;

	idx = key_index((const unsigned char *)key, ht->size);

	if (!ht || !*key || !key)
		return (0);

	bucket = ht->array[idx];

	while (bucket)
	{
		if (strcmp(bucket->key, key) == 0)
		{
			free(bucket->value);
			bucket->value = strdup(value);
			return (1);
		}
		bucket = bucket->next;
	}
	newNode = malloc(sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	newNode->value = strdup(value);
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;

	return (1);
}
