#include "hash_tables.h"

/**
 * hash_table_get - a function that retrieves a value associated with a key.
 * @ht: the hash table to look into.
 * @key:the key looking for.
 *
 * Return: the value associated with the element.
 *         otherwise NULL if key couldn’t be found.
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int idx;
	hash_node_t *bucket;

	idx = 0;

	if (!ht || !key || !*key)
		return (NULL);

	idx = key_index((const unsigned char *)key, ht->size);
	bucket = ht->array[idx];

	while (bucket)
	{
		if (!strcmp(key, bucket->key))
			return (bucket->value);
		bucket = bucket->next;
	}
	return (NULL);
}
