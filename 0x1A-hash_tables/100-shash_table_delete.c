#include "hash_tables.h"

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
			free(tmp->value)
			free(tmp);
		}
	}
	free(ht->array);
	free(ht);
}
