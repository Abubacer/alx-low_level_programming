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
	unsigned long int idx = key_index((const unsigned char *)key, ht->size);
	hash_node_t *bucket, *newNode;

	if (!ht || !*key || !key || !value)
		return (0);

	bucket = ht->array[idx];

	while (bucket)
	{
		if (strcmp(key, bucket->key) == 0)
		{
			free(bucket->value);
			bucket->value = strdup(value);
			if (bucket->value == NULL)
				return (0);
			return (1);
		}
		bucket = bucket->next;
	}
	newNode = calloc(1, sizeof(hash_node_t));
	if (newNode == NULL)
		return (0);

	newNode->key = strdup(key);
	if (newNode->key == NULL)
	{
		free(newNode);
		return (0);
	}
	newNode->value = strdup(value);
	if  (newNode->value == NULL)
	{
		free(newNode->value);
		free(newNode);
		return (0);
	}
	newNode->next = ht->array[idx];
	ht->array[idx] = newNode;
	return (1);
}
