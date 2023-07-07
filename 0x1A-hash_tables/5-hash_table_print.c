#include "hash_tables.h"

/**
 * hash_table_print - a function that prints a hash table.
 * If the hash table is NULL the function don’t print anything.
 * @ht: the hash table key/value to print.
 *
 * Return: void
 */

void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *current;
	unsigned long int i;
	int isFirst = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0 ; i < ht->size ; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (isFirst)
			{
				printf("'%s': '%s'",
					current->key, current->value);
				isFirst = 0;
			}
			else
				printf(", '%s': '%s'",
					current->key, current->value);

			current = current->next;
		}
	}
	printf("}\n");
}
